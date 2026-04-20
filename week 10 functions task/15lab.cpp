#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Out of range";
    } 
    else if (n == 100) {
        cout << "One Hundred";
    }
    else if (n >= 10 && n <= 19) {
        if (n == 10) cout << "Ten";
        else if (n == 11) cout << "Eleven";
        else if (n == 12) cout << "Twelve";
        else if (n == 13) cout << "Thirteen";
        else if (n == 14) cout << "Fourteen";
        else if (n == 15) cout << "Fifteen";
        else if (n == 16) cout << "Sixteen";
        else if (n == 17) cout << "Seventeen";
        else if (n == 18) cout << "Eighteen";
        else if (n == 19) cout << "Nineteen";
    }
    // Handle 1-9 and 20-99
    else {
        // 1. Handle the Tens place
        int tens = n / 10;
        int ones = n % 10;

        if (tens == 2) cout << "Twenty";
        else if (tens == 3) cout << "Thirty";
        else if (tens == 4) cout << "Forty";
        else if (tens == 5) cout << "Fifty";
        else if (tens == 6) cout << "Sixty";
        else if (tens == 7) cout << "Seventy";
        else if (tens == 8) cout << "Eighty";
        else if (tens == 9) cout << "Ninty";
        if (tens >= 2 && ones > 0) {
            cout << " ";
        }
        if (ones == 1) cout << "One";
        else if (ones == 2) cout << "Two";
        else if (ones == 3) cout << "Three";
        else if (ones == 4) cout << "Four";
        else if (ones == 5) cout << "Five";
        else if (ones == 6) cout << "Six";
        else if (ones == 7) cout << "Seven";
        else if (ones == 8) cout << "Eight";
        else if (ones == 9) cout << "Nine";
    }
    cout << endl;
    return 0;
}




