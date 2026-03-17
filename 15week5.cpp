#include<iostream>
using namespace std;
main(){
    int balance=1000;
    int choice;
    int deposit=0;
    int withdraw=0;
for(int i=1;i<=3;i++)
{
   cout<<"Enter pin:";
   int pin;
   cin>>pin;
  if(pin==1234){
    cout<<"Login succesful"<<endl;
    break;
  }
  if(pin!=1234){
    cout<<"Wrong pin!"<<endl;
  }
  if(i==3 && pin!=1234  ){
    cout<<"Too many attempts . Card Blocked"<<endl;
    return 0;
  }
}
  for(int j=1;j<=10;j++)
  {
   cout<<endl<<"--------ATM MENU--------"<<endl;
   cout<<"1. Check balance"<<endl;
   cout<<"2. Deposit money"<<endl;
   cout<<"3. Withdraw money"<<endl;
   cout<<"4. Exit"<<endl;
   cout<<"Enter choice:";
   cin>>choice;
   if(choice==1){
    cout<<"Current balancee ="<<balance<<"";
   }
   else if(choice==2){
    cout<<"Deposit money:";
     cin>>deposit;
     balance=balance+deposit;
   }
    else if(choice==3){
        cout<<"Withdraw money:";
       cin>>withdraw;
       if(withdraw>balance){
         cout<<"Balance insufficent";
       }
        balance=balance-withdraw;
       }
    else if(choice==4){
      cout<<"Thank you for using Atm";
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
  }
 
}