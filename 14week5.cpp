#include<iostream>
using namespace std;
main(){
string name=""; 
int choice;
int studentage=0;
string course;
for(int i=1;i<=3;i++)
{
  cout<<"Enter username:";
  string username;
  cin>>username;
  cout<<"Enter Password:";
  int pass;
  cin>>pass;
  if(username=="admin" && pass==1234){
       cout<<"Login succesfull"<<endl;
       break;
  }
  else{ 
   cout<<"Wrong login"<<endl;  
}    
  if(i==3 && !(username=="admin" && pass==1234)){
     cout<<"too many attempts . program ends"<<endl;
     return 0;
  }

}
for(int j=1; j<=5; j++)
    {
      cout << endl << "------UNIVERSITY MANAGEMENT SYSTEM------" << endl;
      cout << "1. ADD student" << endl;
      cout << "2. View student" << endl;
      cout << "3. ADD course" << endl;
      cout << "4. Exit" << endl;

      cout << "Enter Choice: ";
      cin >> choice;
 
        if(choice == 1)
        {
            cout << "Enter student name: " << endl;
            cin >> name;
            cout << "Enter student age: " << endl;
            cin >> studentage;
            cout << "Student addes succesfully" << endl;
        }
        else if(choice == 2)
        {
            if(name == "")
            {
                cout << "NO student records found" << endl;
            }
            else
            {
                cout << "Student name=" << name << "" << endl;
                cout << "Student age=" << studentage << "" << endl;
            }
        }
        else if(choice == 3)
        {
            cout << "Enter course name: " << endl;
            cin >> course;
            cout << "Course added" << course << "" << endl;
        }
        else if(choice == 4)
        {
            cout << "Program exit" << endl;
            break;
        }
        else
        {
            cout << "invalid choice";
        }
    }
}