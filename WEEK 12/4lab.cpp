#include <iostream>
using namespace std;
void modify1(int *p)
{
    *p = 50;
}
void modify2(int &r)
{
    r = 100;
}

int main()
{
    int a = 50;
    int b = 30;
    modify1(&a);
    modify2(b);
    cout << " value of a after modify kraya hoya "<<a<<"\n ";
    cout << " value of a after modify kraya hoya "<<b<<" ";
}