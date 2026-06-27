#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int id;
    float salary;
    float bonus;
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee e[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter employee " << i+1 << " details:\n";
        cout << "Name: ";
        cin >> e[i].name;
        cout << "ID: ";
        cin >> e[i].id;
        cout << "Basic Salary: ";
        cin >> e[i].salary;
        cout << "Bonus: ";
        cin >> e[i].bonus;
    }

    cout << "\nSalary Records:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nName: " << e[i].name;
        cout << "\nID: " << e[i].id;
        cout << "\nBasic Salary: " << e[i].salary;
        cout << "\nBonus: " << e[i].bonus;
        cout << "\nTotal Salary: " << e[i].salary + e[i].bonus << endl;
    }

    return 0;
}