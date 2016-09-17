#include <iostream>
using namespace std;

class Student
{
	public:
	string name;
};

int main()
{
	Student *s = new Student();
	s->name = "Ektaa";
	cout << "s " << s->name << endl;
	Student s1 = *s;
	s1.name = "Sunil";
	Student s2 = s1;
	s2.name = "vickey";
	
	cout << "s1 "  <<s1.name << endl;
	cout << "s2 " << s2.name << endl;

	delete(s);

	return 0;
}
