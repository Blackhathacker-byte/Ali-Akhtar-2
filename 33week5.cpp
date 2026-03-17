#include<iostream>
using namespace std;
main(){
    int choice;
    string bookname;
    while(true){
    cout<<endl<<"----Library System---"<<endl;
    cout<<"1. Add Book"<<endl;
    cout<<"2. View Book"<<endl;
    cout<<"3. Borrow Book"<<endl;
    cout<<"4. Issue Book"<<endl;
    cout<<"5. Exit "<<endl;
     cout<<"Enter your choice(1-6) : ";
    cin>>choice;
    if(choice==1){
        cout<<"Enter the book name you want to add : ";
        cin>>bookname;
        cout<<"You added book"<<bookname<<""<<endl;
}  
else if(choice==2){
     cout<<"Books in the library :"<<bookname<<""<<endl;
}
  else if(choice==3){
        cout<<"You have borrowed a book"<<endl;
    }
    else if(choice==4){
        cout<<"You have been issued a book  "<<endl;
    }
      else if(choice==5){
        cout<<"Exiting Library system goodbye!";
        break;
}
else{
    cout<<"invalid choice sir";
}
    }
}