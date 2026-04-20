#include <iostream>
using namespace std;
bool Strongnumber(int num)
{
    int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    int originalNum=num;
    int sum=0;
    while (num>0)
    {
        int digit = num % 10;
        sum += facts[digit];
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int number = 145;
    if (Strongnumber(number))
    {
        cout << number << " is a Strong Number." << endl;
    }
    else
    {
        cout << number << " is not a Strong Number." << endl;
    }

    return 0;
}