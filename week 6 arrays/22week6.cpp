#include <iostream>
#include <string>
using namespace std;
int main() {

    string correctUser = "admin";
    string correctPass = "1234";
    
    string enteredUser;
    string enteredPass;
    bool loginSuccessful = false;
    for (int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> enteredUser;
        cout << "Enter Password: ";
        cin >> enteredPass;

        if (enteredUser == correctUser && enteredPass == correctPass) {
            cout << "Login Successful" << endl;
            loginSuccessful = true;
            break;
        } else {
            cout << "Invalid credentials. Try again." << endl;
        }
    }
    if (!loginSuccessful) {
        cout << "Too many incorrect attempts. Access Denied." << endl;
        return 0;
    }
    string studentNames[3];
    int studentAges[3];
    string courseNames[3];
    int studentCount = 0;
    int courseCount = 0;
    int choice;

    while (true) {
        cout << "\n--- University Management System ---" << endl;
        cout << "1. Add Student\n2. View Students\n3. Add Course\n4. View Courses\n5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) { 
            if (studentCount < 3) {
                cout << "Enter Student Name: ";
                cin >> studentNames[studentCount];
                cout << "Enter Student Age: ";
                cin >> studentAges[studentCount];
                studentCount++;
                cout << "Student Added Successfully" << endl;
            } else {
                cout << "System Full (Max 3 Students)" << endl;
            }
        } 
        else if (choice == 2) {
            for (int i = 0; i < studentCount; i++) {
                cout << "Student " << i + 1 << ": " << studentNames[i] << " Age: " << studentAges[i] << endl;
            }
        } 
        else if (choice == 3) { 
            if (courseCount < 3) {
                cout << "Enter Course Name: ";
                cin >> courseNames[courseCount];
                courseCount++;
                cout << "Course Added Successfully" << endl;
            } else {
                cout << "System Full (Max 3 Courses)" << endl;
            }
        } 
        else if (choice == 4) {
            for (int i = 0; i < courseCount; i++) {
                cout << "Course " << i + 1 << ": " << courseNames[i] << endl;
            }
        } 
        else if (choice == 5) { 
            cout << "Exiting system..." << endl;
            break;
        } 
        else {
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}