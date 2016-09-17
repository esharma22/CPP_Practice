#include <iostream>
using namespace std;

class temp
{
	private:
				string something;

	public:
				string getSomething();
				void setSomething(string);
				void print();
};

void temp::setSomething(string s)
{
	something = s;
}

void temp::print()
{
	cout << something << endl;
}

int main()
{
	temp t = new temp;

	t.setSomething("Ektaa");

	t.print();

	return 0;
}
