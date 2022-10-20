#include "Employee.h"
#include "Fruit.h"
#include <iostream>

using namespace std;


void employeeTest() {
    Employee bob = Employee(0, "Bob Gratton", 50000);

    bob.setSalary(49000);   // Salary reduction test, should not work
    bob.print();
    bob.setSalary(75000);   // Set higher salary, should work
    bob.print();            // Verify if the salary augmentation was applied

    // Default constructor test
    Employee employee = Employee();
    employee.print();
}

void fruitTest() {
    // Declaring a Fruit struct
    // The Fruit struct has no constructor so we need to :
    // 1. create an empty object
    // 2. modify each object's attributes to the value we want
    Fruit apple = {};       // 1.
    apple.name = "apple";   // 2.
    apple.color = "red";    // 2. 
    apple.weigth = 2.4;     // 2.
    // we now have an apple object with all the proper informations
    cout << apple.name << "\n" << apple.color << "\n" << apple.weigth << "\n";
}

int main()
{
    //cout << "Hello World!\n";
    //employeeTest();
    fruitTest();
}
