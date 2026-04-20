#include <iostream>
#include <cmath>
using namespace std;
string projectTimeCalculation(int neededHours, int days, int workers) {
    double effectiveDays = days * 0.90;
    double totalHours = effectiveDays * 10 * workers;
    int finalHours = floor(totalHours);
    if (finalHours >= neededHours)
     {
        int left = finalHours - neededHours;
        cout<<"YES! "<<left<<" hours left";
    } else 
    {
        int needed = neededHours - finalHours;
        cout<<"NOT ENOUGH TIME! "<<needed<<" needed ";
    }
}

int main() {
    int neededHours, days, workers;
    cout<<"Enter needed hours:";
    cin >> neededHours;
    cout<<"Enter days:";
    cin >> days;
    cout<<"Enter workers:";
    cin >> workers;
    projectTimeCalculation(neededHours, days, workers);
    return 0;
}