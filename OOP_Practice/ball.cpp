#include <iostream>
using namespace std;

class Ball
{
	private:
				string m_color;
				int m_radius;

	public:	
				Ball(string color = "Black", int radius = 10)
				{
					m_color = color;
					m_radius = radius;
				}
				Ball(int radius)
				{
					m_color = "Black";
					m_radius = radius;
				}

				void print()
				{
					cout << m_color << '\t' << m_radius << endl;
				}
};

int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20);
	twenty.print();

	Ball blueTwenty("blue", 20);
	blueTwenty.print();

	return 0;
}
