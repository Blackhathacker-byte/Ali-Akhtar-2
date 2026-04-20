#include <iostream>
using namespace std;
//<10000
float forlessthan10000(float balance)
{
    balance = balance * (5 / 100) + balance;
    cout << "Updated balance " << balance << "";
}
// for 10k to 50k
float for10to50(float balance)
{
    balance = balance * (7 / 100) + balance;
    cout << "Updated balance " << balance << "";
}
// for above 50k
float forabove50(float balance)
{
    balance = balance * (0.1) + balance;
    cout << "Updated balance " << balance << "";
}
// 2year experience
float forexperienced(float balance)
{
    balance = balance * (12 / 100) + balance;
    cout << "Updated balance " << balance << "";
}
main()
{
    cout << "Enter the balance  and year:  " << endl;
    float balance;
    cin >> balance;
    int years;
    cin >> years;
    if (balance < 10000 && years<3)
    {
        forlessthan10000(balance);
    }
    if (balance>=10000<=50000 && years<3)
    {
        for10to50(balance);
    }
    if(balance>50000 && years<3){
   forabove50( balance);
    }
    else{
        forexperienced( balance);
    }
}