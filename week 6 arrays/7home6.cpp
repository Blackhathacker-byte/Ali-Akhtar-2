#include <iostream>
#include <string>
using namespace std;
int main() {
    int numProducts;
    cout << "Enter number of products: ";
    cin >> numProducts;
    string productNames[100];
    float prices[100];
    int quantity[100];

    for (int i = 0; i < numProducts; i++) {
        cout << "\nEnter name of product " << i + 1 << ": ";
        cin >> productNames[i];
        cout << "Enter price of " << productNames[i] << ": $";
        cin >> prices[i];
        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];
    }
    cout << "\nProduct Inventory Report" << endl;
    cout << "--------------------------" << endl;

    for (int i = 0; i < numProducts; i++) {
        float totalValue = prices[i] * quantity[i];

        cout << productNames[i] << ": $" << prices[i] << ", ";
        cout << quantity[i] << " in stock, ";
        cout << "Total value: $" << totalValue << endl;
    }

    return 0;
}