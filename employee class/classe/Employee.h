#pragma once
#include <iostream>

using namespace std;

class Employee
{
public:

	Employee();		// Les contructeurs ont le nom de classe.
	Employee(int id, string name, double salary);

	int getId() const;
	string getName() const;
	double getSalary() const;

	void setSalary(double salary);

	void print();

private:
	int id_;
	string name_;
	double salary_;
};

void Employee::print() {
	cout << "id : " << id_ << endl;
	cout << "name : " << name_ << endl;
	cout << "salary : " << salary_ << endl;
	cout << endl;
}

// Constructeur par défaut
Employee::Employee() {
	id_ = 0;
	name_ = "John Dow";
	salary_ = 15000;
}

// Constructeur avec les paramètres
Employee::Employee(int id, string name, double salary) {
	id_ = id;
	name_ = name;
	salary_ = salary;
}

// Méthode qui change le salaire d'un employée
void Employee::setSalary(double salary) {
	if (salary > salary_)
		salary_ = salary;
	else
		cout << "Can't lower salaries\n\n";
}

int Employee::getId() const { return id_; }

string Employee::getName() const { return name_; }

double Employee::getSalary() const { return salary_; }
