#include <iostream>
#include <string>

using namespace std;

int main() {
    const int capacity = 5;
    string titles[capacity];
    bool available[capacity]; 
    
    int count = 0;
    int input = 0;

    for(int i = 0; i < capacity; i++) {
        available[i] = true;
    }

    while (input != 5) {
        cout << "\n--- System Main Menu ---" << endl;
        cout << "1. Register Book" << endl;
        cout << "2. List All" << endl;
        cout << "3. Borrow" << endl;
        cout << "4. Return" << endl; 
        cout << "5. Exit" << endl;
        cout << "------------------------" << endl;
        cout << "Action: ";
        cin >> input;

        if (input == 1) {
            if (count < capacity) {
                cout << "Enter name: ";
                cin.ignore(); 
                getline(cin, titles[count]);
                available[count] = true;
                count++;
                cout << "Done." << endl;
            } else {
                cout << "No space left." << endl;
            }
        }
        else if (input == 2) {
            cout << "\n--- Records ---" << endl;
            if (count == 0) {
                cout << "Empty." << endl;
            } else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << titles[i];
                    if (available[i]) {
                        cout << " [In]" << endl;
                    } else {
                        cout << " [Out]" << endl;
                    }
                }
            }
        }
        else if (input == 3) {
            int num;
            cout << "ID to borrow: ";
            cin >> num;
            if (num > 0 && num <= count) {
                if (available[num - 1]) {
                    available[num - 1] = false;
                    cout << "Confirmed: " << titles[num - 1] << endl;
                } else {
                    cout << "Already out." << endl;
                }
            } else {
                cout << "Invalid ID." << endl;
            }
        }
        else if (input == 4) {
            int num;
            cout << "ID to return: ";
            cin >> num;
            if (num > 0 && num <= count) {
                if (!available[num - 1]) {
                    available[num - 1] = true;
                    cout << "Success: " << titles[num - 1] << endl;
                } else {
                    cout << "Not currently borrowed." << endl;
                }
            } else {
                cout << "Invalid ID." << endl;
            }
        }
        else if (input == 5) {
            cout << "Exiting..." << endl;
        }
        else {
            cout << "Try again." << endl;
        }
    }

    return 0;
}