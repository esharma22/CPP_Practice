#include <iostream>
using namespace std;

struct Employee
{
	int age;
	string name;
	int salary;
};

void printEmployeeName(Employee &emp);

int main()
{
	Employee temp;
	temp.age = 24;
	temp.name = "Ektaa";
	temp.salary = 10000;

	printEmployeeName(temp);
	
	return 0;
}

void printEmployeeName(Employee &emp)
{
	cout << "Employee Name- " << emp.name << endl;
}
