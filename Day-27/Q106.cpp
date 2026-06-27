#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int id;
    float salary;
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
        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "\nEmployee Records:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nName: " << e[i].name;
        cout << "\nID: " << e[i].id;
        cout << "\nSalary: " << e[i].salary << endl;
    }

    return 0;
}