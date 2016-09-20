#include "engine.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	Engine e;
	vector<Media*>Result;
	int ch, size;
	string word;

	//e.print();

	/*while(1)
	{
		cout << "1-Search by Call Number" << endl;
		cout << "2-Search by Title" << endl;
		cout << "3-Search by Subjects" << endl;
		cout << "4-Search by Other" << endl;
		cout << "Select any one option or enter 5 to exit" << endl;
		cin >> ch;
		cin.clear();
		cin.ignore();

		switch(ch)
		{
			case 1:
						cout << "Search by Call Number" << endl;
						cout << "Enter part or full call number to be searched -";
						getline(cin, word);
						Result = e.search_call_number(word);
						size = Result.size();
						for(int i = 0; i < size; i++)
						{
							Media *card = Result[i];
							card->display();
						}
						cout << "Records with call number as " << word << " are " << size << endl;
			break;

			case 2:
						cout << "Search by Title" << endl;
						cout << "Enter part or full title to be searched -";
						getline(cin, word);
						Result = e.search_title(word);
						size = Result.size();
						for(int i = 0; i < size; i++)
						{
							Media *card = Result[i];
							card->display();
						}
						cout << "Records with title as " << word << " are " << size << endl;
			break;

			case 3:
						cout << "Search by Subjects" << endl;
						cout << "Enter part or full subjects to be searched -";
						getline(cin, word);
						Result = e.search_subjects(word);
						size = Result.size();
						for(int i = 0; i < size; i++)
						{
							Media *card = Result[i];
							card->display();
						}
						cout << "Records with subjects as " << word << " are " << size << endl;
			break;

			case 4:
						cout << "Search by Other" << endl;
						cout << "Enter keywords to be searched -";
						getline(cin, word);
						Result = e.search_other(word);
						size = Result.size();
						for(int i = 0; i < size; i++)
						{
							Media *card = Result[i];
							card->display();
						}
						cout << "Records with keywords as " << word << " are " << size << endl;
			break;

			case 5:
						return 0;

			default: 
						cout << "Invalid input" << endl;

		}
	}*/
	return 0;
}
