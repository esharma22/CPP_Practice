#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include "Media.h"
using namespace std;

class Book : public Media
{
	private:
				string call_number;
				string title;
				string subjects;
				string author;
				string description;
				string publisher;
				string city;
				string year;
				string series;
				string notes;

	public:
				Book(string,
					  string,
					  string,
					  string,
					  string,
					  string,
					  string,
					  string,
					  string,
					  string);
			
				void display() const;
				bool compare_other(const string str) const;
};
#endif
