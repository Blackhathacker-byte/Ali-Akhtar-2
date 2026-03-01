
#include <iostream>
using namespace std;

main(){

cout << "Enter a 4-digit number: ";
int num;
cin >> num;
int d1, d2, d3, d4, sum;
d1 = num % 10;
num = num / 10;

d2 = num % 10;
num = num / 10;

d3 = num % 10;
num = num / 10;

d4 = num % 10;


sum = d1 + d2 + d3 + d4;

cout << "Sum of individual digits: " << sum<<"";
}
