#include <iostream>
using namespace std;

class Stack
{
	private:
				int arr[10];
				int m_length;

	public:
				void reset()
				{
					m_length = 0;
					for(int i = 0; i < 10; i++)
					{
						arr[i] = 0;
					}
				}

				bool push(int value)
				{
					if(m_length == 10)
						return false;
					else
						arr[m_length++] = value;
						return true;
				}

				int pop()
				{
					if(m_length == 0)
						return -1;
					else
						return arr[--m_length];
				}

				void print()
				{
					for(int i = 0; i < m_length; i++)
					{
						cout << arr[i] << '\t';
					}
					cout << endl;
				}
};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}
