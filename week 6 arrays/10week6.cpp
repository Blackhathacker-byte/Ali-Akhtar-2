#include <iostream>
using namespace std;
 main() {
    char word[100];
    cout << "Enter a String: ";
    cin.getline(word, 100); 

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
         {
            if (word[i] == 'z') {
                word[i] = 'a';
            } else {
                word[i] = word[i] + 1;
            }
        } 
        else if (word[i] >= 'A' && word[i] <= 'Z') 
        {
            if (word[i] == 'Z') {
                word[i] = 'A';
        } else {
                word[i] = word[i] + 1;
         }
    }
       }

    cout << "Shifted String: " << word << endl;

}