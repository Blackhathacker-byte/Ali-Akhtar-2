#include <iostream>
#include <conio.h>
using namespace std;

// variables ground
string name[100];
int accNo[100];
int balance[100];
bool status[100];
int totalAccounts = 0;
int historyIndex = 0;
string history[100];

// =================== ADMIN FUNCTIONS ===================
// 1.add account
void addAccount()
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
    history[historyIndex] = "Account Added:" + name[totalAccounts - 1];
    historyIndex++;
    cout << "Press any key to continue:";
    getch();
}
// 2.remove account
void removeAccount()
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

    if (index == -1)
    {
        cout << "Account not found!" << endl;
        cout << "Press any key to continue:";
        getch();
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

        totalAccounts--;

        cout << "Account removed succesfully" << endl;
        cout << "Press any key to continue:";
        getch();
    }
}
// 3.update account
void updateAccount()
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
        cout << "\nPress any key to continue:";
        getch();
    }
    else
    {
        cout << "Enter New Name: ";
        cin >> name[found];

        cout << "Enter New Balance: ";
        cin >> balance[found];

        cout << "Account Updated Successfully\n";
        history[historyIndex] = "Account updated succesfully:" + name[found];
        historyIndex++;
        cout << "Press any key to continue:";
        getch();
    }
}
// 4.view accounts
void viewAccounts()
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
// 5.searchaccount
void searchAccountAdmin()
{
    system("cls");
    bool found = false;
    int searchAcc;
    cout << "Enter account number of account You want to search:\n";
    cin >> searchAcc;
    for (int o = 0; o < totalAccounts; o++)
    {
        if (searchAcc == accNo[o])
        {
            cout << "\nAccount is found";
            cout << "\nName: " << name[o] << "";
            cout << "\nAccount Number:" << accNo[o] << "";
            cout << "\nAccount Balance:" << balance[o] << "";
            // history saving
            history[historyIndex] = "Account viewed " + name[o];
            historyIndex++;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nACCOUNT NOT FOUND!";
    }
    cout << "\nPress any key to continue:";
    getch();
}
// 6.sort 
void sortAccounts()
{
    system("cls");
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
    cout << "press any key to continue:";
    getch();
}
// 7.freeze account
void freezeAccount()
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
        cout << "\nPress any key to continue:";
        getch();
    }
    else
    {
        if (status[index] == true)
        {
            status[index] = false;
            cout << "\nAccount frozen";
            // history saving
            history[historyIndex] = "Freezed: Account name " + name[index];
            historyIndex++;
            cout << "\nPress any key to continue:";
            getch();
        }
        else
        {
            status[index] = true;
            cout << "\nAccount Activated";
            // history saving
            history[historyIndex] = "Unfreezed: Account name " + name[index];
            historyIndex++;
            cout << "\nPress any key to continue:";
            getch();
        }
    }
}
// 8.view history
void viewHistory()
{
    system("cls");
    cout << "\nShowing the history:";
    cout << "\n =======================";
    for (int i = 0; i < historyIndex; i++)
    {
        cout << "\n " << i + 1 << ". " << history[i] << "";
    }
    cout << "" << endl;
    cout << "\nPress any key to continue:";
    getch();
}
// 9.daily report
void dailyReport()
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
    cout << "\nPress any key to continue:";
    getch();
}
// 10.admin menu
void adminMenu()
{
    system("cls");
    cout << "======WELCOME DEAR ADMIN TO LOGIN PAGE======\n";
    cout << "Enter Username and Password:\n";
    string username;
    string password;
    cin >> username;
    cin >> password;

    if (username == "admin" && password == "1234")
    {
        cout << "Login Succesful:\n";
        string choice;
        while (true)
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
            cout << "10.Logout\n";
            cout << "\nEnter choice: ";
            cin >> choice;

            if (choice == "10")
            {
                cout << "\nYou decided to logout";
                break;
            }
            else if (choice == "1")
                addAccount();
            else if (choice == "2")
                removeAccount();
            else if (choice == "3")
                updateAccount();
            else if (choice == "4")
                viewAccounts();
            else if (choice == "5")
                searchAccountAdmin();
            else if (choice == "6")
                sortAccounts();
            else if (choice == "7")
                freezeAccount();
            else if (choice == "8")
                viewHistory();
            else if (choice == "9")
                dailyReport();
            else
            {
                cout << "Invalid\n";
                cout << "\nPress any key to continue:";
                getch();
            }
        }
    }
    else
    {
        cout << "\nWrong username or password!";
        cout << "\nPress any key to continue:";
        getch();
    }
}

// =================== USER FUNCTIONS ===================
//1.account details
void viewAccountDetails()
{
    system("cls");
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
    cout << "\nPress any key to continue:";
    getch();
}
//2,check balaance
void checkBalance()
{
    system("cls");
    bool found = false;
    cout << "\nEnter the account number:";
    int acc;
    cin >> acc;

    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == acc)
        {
            cout << " Account balance :" << balance[i];
            found = true;
            break;
        }
    }
    if (!found)
        cout << "\nNo account found!:";
    cout << "\nPress any key to continue:";
    getch();
}
//3.deposit money
void depositMoney()
{
    system("cls");
    bool deposited = false;
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
            deposited = true;
            break;
        }
    }
    if (!deposited)
    {
        cout << "\nAccount not found! ";
    }
    cout << "\nPress any key to continue:";
    getch();
}
//4.withdraw money
void withdrawMoney()
{
    system("cls");
    int acc, amount;
    cout << "\nEnter Account Number: ";
    cin >> acc;
    cout << "\nEnter Amount to Withdraw: ";
    cin >> amount;

    bool found = false;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == acc)
        {
            found = true;
            if (status[i] == false)
            {
                cout << "Account is Frozen";
            }
            else if (balance[i] >= amount)
            {
                balance[i] -= amount;
                cout << "Withdraw successful enjoy the day!";
            }
            else
            {
                cout << "Insufficient balance ";
            }
            break;
        }
    }
    if (!found)
    {
        cout << "\nAccount not found!";
    }
    cout << "\nPress any key to continue:";
    getch();
}
//5. status of account
void checkAccountStatus()
{
    system("cls");
    cout << "\nEnter Account Number: ";
    int acc;
    cin >> acc;

    bool found = false;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == acc)
        {
            found = true;
            if (status[i])
            {
                cout << " Account is Active";
            }
            else
            {
                cout << " Account is Frozen";
            }
            break;
        }
    }
    if (!found)
    {
        cout << "\nAccount not found!";
    }
    cout << "\nPress any key to continue:";
    getch();
}
//6.searchaccount
void searchAccountUser()
{
    system("cls");
    cout << "\nEnter Account Number to Search: ";
    int acc;
    cin >> acc;

    bool found = false;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == acc)
        {
            cout << "\nAccount Found!";
            cout << "\nName: " << name[i];
            cout << "\nAccount Number: " << accNo[i];
            cout << "\nBalance: " << balance[i];
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nAccount not found!";
    }
    cout << "\nPress any key to continue:";
    getch();
}
//7.edit name
void changeAccountName()
{
    system("cls");
    cout << "\nEnter Account Number: ";
    int acc;
    cin >> acc;

    bool found = false;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == acc)
        {
            cout << "\nEnter new account name:";
            cin >> name[i];
            cout << "Name of your account has been changed";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nAccount not found!";
    }
    cout << "\nPress any key to continue:";
    getch();
}
//8.transfr
void transferMoney()
{
    system("cls");
    int sender, receiver, send;
    int senderIndex = -1;
    int receiverIndex = -1;
    cout << "\nEnter Your Account Number: ";
    cin >> sender;
    cout << "Enter Receiver Account Number: ";
    cin >> receiver;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == sender)
        {
            senderIndex = i;
            break;
        }
    }

    for (int i = 0; i < totalAccounts; i++)
    {
        if (accNo[i] == receiver)
        {
            receiverIndex = i;
            break;
        }
    }
    if (senderIndex == -1)
    {
        cout << "\nSender Account Not Found!";
    }
    else if (receiverIndex == -1)
    {
        cout << "\nReceiver Account Not Found!";
    }
    else if (status[senderIndex] == false)
    {
        cout << "\nYour Account is Frozen!";
    }
    else
    {
        cout << "Enter Amount to Transfer: ";
        cin >> send;
        if (send <= 0)
        {
            cout << "\nInvalid Amount!";
        }
        // Balance check
        else if (balance[senderIndex] < send)
        {
            cout << "\nInsufficient Balance!";
        }
        else
        {
            balance[senderIndex] -= send;
            balance[receiverIndex] += send;
            cout << "\nTransfer Successful!";
        }
    }
    cout << "\nPress any key to continue:";
    getch();
}
// 9.loan
void loanEgligibility()
{
    system("cls");
    cout << "Enter the account number:";
    int num;
    cin >> num;
    int index = -1;
    for (int i = 0; i < totalAccounts; i++)
    {
        if (num == accNo[i])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "\nAccount not found!";
    }
    else if (balance[index] > 50000)
    {
        cout << "\n You are egligible for loan ";
    }
    else
    {
        cout << "\n You are not egligible for loan ";
    }
    cout << "\nPress any key to continue:";
    getch();
}
// ============user menu=============
void userMenu()
{
    string choice;
    while (true)
    {
        system("cls");
        cout << "\n:::::::::::================================:::::::::::::::::::::";
        cout << "\n       WELCOME TO ALI BANKING MANAGEMENT SYSTEM";
        cout << "\n:::::::::::================================:::::::::::::::::::::";
        cout << "\n            You are in USER MENU right now\n";
        cout << "\n1. View Account Details";
        cout << "\n2. Check Balance";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Check Account Status";
        cout << "\n6. Search Account";
        cout << "\n7. Change Account Name";
        cout << "\n8. Transfer money";
        cout << "\n9. Loan Egligibility";
        cout << "\n10.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == "10")
        {
            cout << "\n Thank you for using\n Have a nice day! ";
            break;
        }
        else if (choice == "1")
            viewAccountDetails();
        else if (choice == "2")
            checkBalance();
        else if (choice == "3")
            depositMoney();
        else if (choice == "4")
            withdrawMoney();
        else if (choice == "5")
            checkAccountStatus();
        else if (choice == "6")
            searchAccountUser();
        else if (choice == "7")
            changeAccountName();
        else if (choice == "8")
            transferMoney();
        else if (choice == "9")
            loanEgligibility();
        else
        {
            cout << "\nInvalid choice!";
            cout << "\nPress any key to continue:";
            getch();
        }
    }
}

// =================== MAIN ===================
//  in it will call fucntions thay will also take input&&further process
int main()
{
    string choice;
    while (true)
    { // choice ground
        system("cls");
        cout << "\n========================\n";
        cout << "1.Admin Menu\n";
        cout << "2.User  Menu\n";
        cout << "========================\n";
        cout << "Enter a choice:";
        cin >> choice;
        getch();

        if (choice == "1")
        {
            adminMenu();
        }
        else if (choice == "2")
        {
            userMenu();
        }
        else
        {
            cout << "\nInvalid choice!";
            cout << "\nPress any key to continue:";
            getch();
        }
    }
}