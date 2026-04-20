#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    cout << "Quadratic Equation Solver (ax^2 + bx + c = 0)" << endl;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation." << endl;
        return 0;
    }
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } 
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}