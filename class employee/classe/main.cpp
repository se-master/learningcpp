#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";

    Employee Bob = Employee(0, "Bob Gratton", 50000);

    Bob.setSalary(49000); // Test de diminution de salaire, ne devrait pas fonctionner

    Bob.print();

    Bob.setSalary(100000);

    Bob.print();
}
