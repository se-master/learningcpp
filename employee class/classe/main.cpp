#include "Employee.h"
#include <iostream>

using namespace std;


void employeeTest() {
    Employee Bob = Employee(0, "Bob Gratton", 50000);

    Bob.setSalary(49000);   // Test de diminution de salaire, ne devrait pas fonctionner
    Bob.print();
    Bob.setSalary(75000);   // Change le salaire
    Bob.print();            // Check les modifications

    // Test constructeur par défaut
    Employee employee = Employee();
    employee.print();
}

int main()
{
    //cout << "Hello World!\n";
    employeeTest();
}
