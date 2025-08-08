#include <iostream>

int main()
{
    using namespace std;
    double balance, deposit, withdraw;
    cout << "Enter your current balance to start with:\n";
    cin >> balance;

    cout << "Your current balance is: " << balance << endl;

    int choice;
    int loop = 1;
    while (loop == 1)
    {
        cout << "Enter 1 to deposit money, 2 to withdraw money, 3 to check balance or 4 to exit:\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the amount you want to deposit:\n";
            cin >> deposit;
            balance += deposit;
            cout << "Amount has been successfully deposited. Your current balance is: " << balance << endl;
            break;
        case 2:
            cout << "Enter the amount you want to withdraw:\n";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "Your withdrawal amount exceeds your current balance.\n";
                cout << "Your current balance is: " << balance << endl;
            }
            else
            {
                cout << "Withdrawal initiated..." << endl;
                balance -= withdraw;
                cout << "Amount has been succesfully withdrawn. Your current balance is: " << balance << endl;
            }
            break;
        case 3:
            cout << "Your current balance is: " << balance << endl;
            break;
        case 4:
            cout << "Exiting the bank system. Goodbye!" << endl;
            loop =0;
            break;
        default:
        cout<<"Invalid choice, enter a valid option as per the instructions.\n";
            break;
        }
    }
    return 0;
}