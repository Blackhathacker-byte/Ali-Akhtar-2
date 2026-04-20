#include <iostream>
using namespace std;
float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0.0;
    if (score >= 90) {
        bonusPercentage = 0.20; // 20%
    } 
    else if (score >= 75) {
        bonusPercentage = 0.10; // 10%
    } 
    else {
        bonusPercentage = 0.05; // 5%
    }
    if (experience >= 5) {
        bonusPercentage += 0.05;
    }
    float totalBonus = base * bonusPercentage;
    float finalSalary = base + totalBonus;
    return finalSalary;
}

int main() {
    float base;
    int score, exp;
    cout << "Enter Base Salary: ";
    cin >> base;
    cout << "Enter Performance Score: ";
    cin >> score;
    cout << "Enter Years of Experience: ";
    cin >> exp;
    float result = calculateSalary(base, score, exp);
    cout << "The Final Salary is: " << result << endl;
    return 0;
}