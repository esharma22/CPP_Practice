#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string line;
	ifstream books("book.txt");
	string call_number;
	string title;
	string subjects;
	string notes;
	string author;
	string description;
	string publisher;
	string city;
	string year;
	string series;

	while(getline(books, line))
	{
		getline(books, call_number, '|');
		cout << "Call_number- " << call_number << endl;
		getline(books, title, '|');
		cout << "Title- " << title << endl;
		getline(books, subjects, '|');
		cout << "Subjects- " << subjects << endl;
		getline(books, author, '|');
		cout << "Author- " << author << endl;
		getline(books, description, '|');
		cout << "Description- " << description << endl;
		getline(books, publisher, '|');
		cout << "Publisher- " << publisher << endl;
		getline(books, city, '|');
		cout << "City- " << city << endl;
		getline(books, year, '|');
		cout << "Year- " << year << endl;
		getline(books, series, '|');
		cout << "Series- " << series << endl;
		getline(books, notes, '|');
		cout << "Notes- \n\n" << notes << endl;
	}
}
