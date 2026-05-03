#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ // variables ground
    int choice;
    string name[100];
    int accNo[100];
    int balance[100];
    bool status[100];
    int totalAccounts = 0;
    int historyIndex = 0;
    string history[100];
    while (true)
    { // choice ground
        cout << "\n========================\n";
        cout << "1.Admin Menu\n";
        cout << "2.User  Menu\n";
        cout << "========================\n";
        cout << "Enter a choice:";
        cin >> choice;
        if (choice == 1)
        { // start of admin menu
            system("cls");
            cout << "======WELCOME DEAR ADMIN TO LOGIN PAGE======\n";
            cout << "Enter Username and Password:\n";
            string username;
            int password;
            cin >> username;
            cin >> password;

            if (username == "admin" && password == 1234)
            {
                cout << "Login Succesful:\n";
                while (true) //
                {
                    system("cls");
                    cout << "\n =====Welcome to the Admin Menu=======\n";

                    cout << "1. Add Account\n";
                    cout << "2. Remove Account\n";
                    cout << "3. Update Account\n";
                    cout << "4. View Accounts\n";
                    cout << "5. Search Account\n";
                    cout << "6. Sort Accounts\n";
                    cout << "7. Freeze/Unfreeze Account\n";
                    cout << "8. View History\n";
                    cout << "9. Daily Report\n";
                    cout << "10. Logout\n";
                    cout << "\nEnter choice: ";
                    cin >> choice;
                    if (choice == 10)
                    {
                        cout << "\nYou decided to logout";
                        break;
                    }
                    // add account
                    else if (choice == 1)
                    {
                        system("cls");
                        cout << "\nAdd Account\n";

                        cout << "Enter Name: ";
                        cin >> name[totalAccounts];

                        cout << "Enter Account Number: ";
                        cin >> accNo[totalAccounts];

                        cout << "Enter Balance: ";
                        cin >> balance[totalAccounts];

                        status[totalAccounts] = true;

                        totalAccounts++;

                        cout << "Account Added Successfully\n";
                        cout << "Press any key to continue:";
                        getch();
                        history[historyIndex] = "Account Added:" + name[totalAccounts - 1];
                        historyIndex++;
                    }
                    // remove account
                    else if (choice == 2)
                    {
                        system("cls");
                        cout << "Remove Account\n";
                        cout << "Enter the Account number you want to delete: ";
                        int delAcc;
                        cin >> delAcc;

                        int index = -1;

                        for (int i = 0; i < totalAccounts; i++)
                        {
                            if (accNo[i] == delAcc)
                            {
                                index = i;
                                break;
                            }
                        }

                        if (index == -1) //
                        {
                            cout << "Account not found!" << endl;
                        }
                        else
                        {
                            string removedaccount = name[index];
                            for (int i = index; i < totalAccounts - 1; i++)
                            {
                                name[i] = name[i + 1];
                                accNo[i] = accNo[i + 1];
                                balance[i] = balance[i + 1];
                                status[i] = status[i + 1];
                            }
                            history[historyIndex] = "Account Removed:" + removedaccount;
                            historyIndex++;

                            totalAccounts--; //

                            cout << "Account removed succesfully" << endl;
                            cout << "Press any key to continue:";
                            getch();
                        }
                    }
                    // update account
                    else if (choice == 3)
                    {
                        system("cls");
                        cout << "Update Account\n";
                        int acc;
                        cout << "Enter Account Number to Update: ";
                        cin >> acc;

                        int found = -1;

                        for (int i = 0; i < totalAccounts; i++)
                        {
                            if (accNo[i] == acc)
                            {
                                found = i;
                                break;
                            }
                        }

                        if (found == -1)
                        {
                            cout << "Account Not Found\n";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                        else
                        {

                            cout << "Enter New Name: ";
                            cin >> name[found];

                            cout << "Enter New Balance: ";
                            cin >> balance[found];

                            cout << "Account Updated Successfully\n";
                            cout << "Press any key to continue:";
                            getch();
                            history[historyIndex] = "Account updated succesfully:" + name[found];
                            historyIndex++;
                        }
                    }
                    // for viewing accounts
                    else if (choice == 4)

                    {
                        system("cls");
                        cout << "View Accounts\n";

                        if (totalAccounts == 0)
                        {
                            cout << "No accounts found:\n";
                        }
                        else
                        {
                            for (int i = 0; i < totalAccounts; i++)
                            {
                                cout << "\nAccount Number: " << accNo[i];
                                cout << "\nName: " << name[i];
                                cout << "\nBalance: " << balance[i] << "$";
                                cout << "\nStatus: ";
                                if (status[i] == true)
                                {
                                    cout << "Active";
                                }
                                else
                                {
                                    cout << "Frozen";
                                }
                                cout << endl;
                            }
                        }
                        // histroy saving
                        history[historyIndex] = " Admin viewed Accounts: ";
                        historyIndex++;
                        cout << "\nPress any key to continue:";
                        getch();
                    }
                    // SEARCHING ACCOUNT
                    else if (choice == 5)
                    {
                        system("cls");
                        int searchAcc;
                        cout << "Enter account number of account You want to search:\n";
                        cin >> searchAcc;
                        for (int o = 0; o < totalAccounts; o++)
                        {
                            if (searchAcc == accNo[o])
                            {
                                string accountviewed = history[o];
                                cout << "\nAccount is found";
                                cout << "\nName: " << name[o] << "";
                                cout << "\nAccount Number:" << accNo[o] << "";
                                cout << "\nAccount Balance" << balance[o] << "";
                                // history saving
                                history[historyIndex] = "Account viewed " + name[o];
                                historyIndex++;
                            }
                            else
                            {
                                cout << "\nACCOUNT NOT FOUND!";
                            }
                            cout << "\nPress any key to continue:";
                            getch();
                        }
                        cout << "\n"
                             << endl;
                    }
                    // sorting most difficult part(balance wise)
                    else if (choice == 6)
                    { system("cls");
                        cout << "\nSort the sccounts:";
                        for (int i = 0; i < totalAccounts; i++)
                        {
                            for (int j = i + 1; j < totalAccounts; j++)
                            {
                                if (balance[i] > balance[j])
                                {
                                    // swap account balance
                                    int tempbalance = balance[i];
                                    balance[i] = balance[j];
                                    balance[j] = tempbalance;
                                    // swaping account number
                                    int tempaccNo = accNo[i];
                                    accNo[i] = accNo[j];
                                    accNo[j] = tempaccNo;
                                    // swaping
                                    bool tempstatus = status[i];
                                    status[i] = status[j];
                                    status[j] = tempstatus;
                                    // name swapping
                                    // swap name
                                    string tempName = name[i];
                                    name[i] = name[j];
                                    name[j] = tempName;
                                }
                            }
                        }
                        // history saving
                        history[historyIndex] = "Account sorted: ";
                        historyIndex++;
                        cout << "Accounts sorted by Balance" << endl;
                        cout<<"press any key to continue:";
                            getch();
                    }
                    // freezing & unfreezing account
                    else if (choice == 7)
                    {
                        system("cls");
                        int accnumber;
                        cout << "\nEnter account number of the account you want to freeze:";
                        cin >> accnumber;
                        int index = -1;
                        for (int f = 0; f < totalAccounts; f++)
                        {
                            if (accNo[f] == accnumber)
                            {
                                index = f;
                                break;
                            }
                        }
                        if (index == -1)
                        {
                            cout << "\nAccount not found!";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                        else
                        {
                            if (status[index] == true)
                            {
                                status[index] = false;
                                cout << "\nAccount frozen";
                                cout<<"\nPress any key to continue:";
                            getch();
                                // history saving
                                history[historyIndex] = "Freezed: Account name " + name[index];
                                historyIndex++;
                            }
                            else
                            {

                                status[index] = true;
                                cout << "\nAccount Activated";
                                cout<<"\nPress any key to continue:";
                            getch();
                                // history saving
                                history[historyIndex] = "Unfreezed: Account name " + name[index];
                                historyIndex++;
                            }
                        }
                    }
                    // for history
                    else if (choice == 8)
                    {
                system("cls");
                        cout << "\nShowing the history:";
                        cout << "\n =======================";
                        for (int i = 0; i < historyIndex; i++)
                        {
                            cout << "\n " << i + 1 << ". " << history[i] << "";
                        }
                        cout << "" << endl;
                        cout<<"\nPress any key to continue:";
                            getch();
                    }
                    // daily reports
                    else if (choice == 9)
                    {
                        system("cls");
                        cout << "\n -: Viewing The Daily Report :- ";
                        int totalbalance = 0;
                        int totalaccounts = totalAccounts;
                        int frozenaccounts = 0;
                        int activatedaccounts = 0;

                        for (int i = 0; i < totalAccounts; i++)
                        {
                            totalbalance += balance[i];

                            if (status[i] == true)
                                activatedaccounts++;
                            else
                                frozenaccounts++;
                        }
                        cout << "\n===== DAILY REPORT =====\n";
                        cout << "Total Accounts: " << totalaccounts << endl;
                        cout << "Active Accounts: " << activatedaccounts << endl;
                        cout << "Frozen Accounts: " << frozenaccounts << endl;
                        cout << "Total Balance: " << totalbalance << endl;
                        cout<<"\nPress any key to continue:";
                            getch();
                    }
                    else
                    {
                        cout << "Invalid\n";
                        cout<<"\nPress any key to continue:";
                            getch();
                    }
                }
            }
        }
        // For the user menu
        else if (choice == 2)
        {
            while (true)
            {
                cout << "\n:::::::::::================================:::::::::::::::::::::";
                cout << "\n       WELCOME TO ALI BANKING MANAGEMENT SYATEM";
                cout << "\n:::::::::::================================:::::::::::::::::::::";
                cout << "\n            You are in USER MENU right now\n";
                cout << "\n1. View Account Details";
                cout << "\n2. Check Balance";
                cout << "\n3. Deposit Money";
                cout << "\n4. Withdraw Money";
                cout << "\n5. Check Account Status";
                cout << "\n6. Search Account";
                cout << "\n7. Change Account Name";
                cout << "\n8. View All Accounts";
                cout << "\n9. Total accounts & Balance";
                cout << "\n10. Exit";

                cout << "\nEnter choice: ";
                cin >> choice;
                // breaking loop
                if (choice == 10)
                {
                    break;
                }

                // 1. View Account Details
                else if (choice == 1)
                {system("cls");
                    cout << "\nEnter the account number of account you want to see:";
                    int acc;
                    cin >> acc;
                    int index = -1;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            index = i;
                            break;
                        }
                    }

                    if (index != -1)
                    {
                        cout << "\n=======Account Details=======";
                        cout << "\nName: " << name[index];
                        cout << "\nAccount Number: " << accNo[index];
                        cout << "\nBalance: " << balance[index];
                        
                    }
                    else
                    {
                        cout << "\nNo account found!:\n";
                       
                    }
                     cout<<"\nPress any key to continue:";
                            getch();
                }

                // 2. Check Balance
                else if (choice == 2)
                {
                    system("cls");
                    cout << "\nEnter the account number:";
                    int acc;
                    cin >> acc;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            cout << " Account balance :" << balance[i];
                            cout<<"\nPress any key to continue:";
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "\nNo account found!:";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                    }
                }

                // 3. Deposit Money
                else if (choice == 3)
                {system("cls");
                    int acc, amount;
                    cout << "\nEnter account number:";
                    cin >> acc;
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            balance[i] += amount;
                            cout << "Money Deposited";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                        else
                        {
                            cout << " No such account available to withdraw:";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                    }
                }

                // 4. Withdraw Money
                else if (choice == 4)
                {system("cls");
                    int acc, amount;
                    cout << "\nEnter Account Number: ";
                    cin >> acc;
                    cout << "\nEnter Amount to Withdraw: ";
                    cin >> amount;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            if (balance[i] >= amount)
                            {
                                balance[i] -= amount;
                                cout << "Withdraw successful enjoy the day!";
                                cout<<"\nPress any key to continue:";
                            getch();
                            }
                            else
                            {
                                cout << "Insufficient balance ";
                                cout<<"\nPress any key to continue:";
                            getch();
                            }
                            break;
                        }
                    }
                }

                // 5. Check Account Status
                else if (choice == 5)
                { system("cls");
                    cout << "\nEnter Account Number: ";
                    int acc;
                    cin >> acc;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            if (status[i]){
                                cout << " Account is Active";
                                cout<<"\nPress any key to continue:";
                            getch();
                            }
                            else{
                                cout << " Account is Frozen";
                            break;
                            }
                        }
                    }
                }

                // 6. Search Account
                else if (choice == 6)
                {  system("cls");
                    cout << "\nEnter Account Number to Search: ";
                    int acc;
                    cin >> acc;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            cout << "\nAccount Found!";
                            cout << "\nName: " << name[i];
                            cout << "\nAccount Number: " << accNo[i];
                            cout << "\nBalance: " << balance[i];
                            break;
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                    }
                }

                // 7. Change Account Name
                else if (choice == 7)
                {
                    system("cls");
                    cout << "\nEnter Account Number: ";
                    int acc;
                    cin >> acc;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        if (accNo[i] == acc)
                        {
                            cout<<"\nEnter new account name:";
                            cin >> name[i];
                            cout << "Name of your account has been changed";
                            cout<<"\nPress any key to continue:";
                            getch();
                            break;

                        }
                    }
                }

                // 8. View All Accounts
                else if (choice == 8)
                {
                    system("cls");
                    for (int i = 0; i < totalAccounts; i++)
                    {
                        cout << "\n--- All Accounts ---";

                        for (int i = 0; i < totalAccounts; i++)
                        {
                            cout << "\nAccount No: " << accNo[i];
                            cout << "\nName: " << name[i];
                            cout << "\nBalance: " << balance[i];
                            cout << "\n-------------------";
                            cout<<"\nPress any key to continue:";
                            getch();
                        }
                    }
                }
                // 9. Simple Summary
                else if (choice == 9)
                {      system("cls");
                    int totalBalance = 0;

                    for (int i = 0; i < totalAccounts; i++)
                    {
                        totalBalance += balance[i];
                    }

                    cout << "\nTotal Accounts: " << totalAccounts;
                    cout << "\nTotal Balance: " << totalBalance;
                    cout<<"\nPress any key to continue:";
                            getch();
                }
            }
        }
    }
}
