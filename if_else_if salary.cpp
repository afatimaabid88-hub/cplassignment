#include <iostream>
using namespace std;
int main()
{
 double salary, bonus, totalSalary;
    int years;
 cout << "Enter salary: ";
    cin >> salary;
 cout << "Enter years of service: ";
    cin >> years;
 if (salary < 0 || years < 0)
        cout << "Invalid input";
    else if (years > 10)
        bonus = salary * 0.15;
    else if (years >= 6)
        bonus = salary * 0.10;
    else if (years >= 1)
        bonus = salary * 0.05;
    else
        bonus = 0;
 if (salary >= 0 && years >= 0)
    {
        totalSalary = salary + bonus;
        cout << "Bonus = Rs. " << bonus << endl;
        cout << "Total salary = Rs. " << totalSalary;
    }
 return 0;
}
