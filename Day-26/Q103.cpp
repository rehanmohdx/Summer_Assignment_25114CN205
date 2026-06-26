#include <iostream>
using namespace std;

int main()
{
    int choice;
    int balance = 10000;
    int amount;
    
    while(true)
    {
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Balance: " << balance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance = balance - amount;
                cout << "Money withdrawn" << endl;
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
        }
        else if(choice == 3)
        {
            cout << "Enter amount: ";
            cin >> amount;

            balance = balance + amount;
            cout << "Money deposited" << endl;
        }
        else if(choice == 4)
        {
            cout << "Thank you" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}