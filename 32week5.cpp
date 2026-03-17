#include <iostream>
using namespace std;
main()
{
    int n1, n2, choice;
    while (true)
    {
        cout << endl
             << "----Calculator----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Divison" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exit " << endl;

        cout << "Enter your choice(1-6) : ";
        cin >> choice;
          if(choice==1){
            cout<<"Enter the first no. :";
        cin>>n1;

        cout<<"Enter the second no. :";
        cin>>n2;
        cout<<"Addition of "<<n1<<" and " <<n2<<": "<<n1+n2 <<endl;
    }
    else if(choice==2){
        cout<<"Enter the first no. :";
        cin>>n1;

        cout<<"Enter the second no. :";
        cin>>n2;

        cout<<"Subtraction of "<<n1<<" and " <<n2<<": "<<n1-n2 <<endl;
    }
    else if(choice==3){
        cout<<"Enter the first no. :";
        cin>>n1;

        cout<<"Enter the second no. :";
        cin>>n2;

        cout<<"Multiplication of "<<n1<<" and " <<n2<<": "<<n1*n2 <<endl;
    }
    else if(choice==4){
        cout<<"Enter the first no. :";
        cin>>n1;

        cout<<"Enter the second no. :";
        cin>>n2;

        cout<<"Division of "<<n1<<" and " <<n2<<": "<<n1/n2 <<endl;
    }
    else if(choice==5){
        cout<<"Enter the first no. :";
        cin>>n1;

        cout<<"Enter the second no. :";
        cin>>n2;

        cout<<"Modulus of "<<n1<<" and " <<n2<<": "<<n1%n2 <<endl;
    }
    else if(choice==6){
        cout<<" Exit";
        break;
    }
     else{
        cout<<"You entered an invalid input"<<endl;
     }
    }
}