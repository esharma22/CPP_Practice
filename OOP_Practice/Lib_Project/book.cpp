#include "book.h"
#include <iostream>

using namespace std;

Book::Book(string call_number,
			  string title,
			  string subjects,
			  string author,
			  string description,
			  string publisher,
			  string city,
			  string year,
			  string series,
			  string notes) : Media(call_number, title, subjects, notes), author(author), description(description), publisher(publisher), city(city), year(year), series(series)
{
/*
	this->author = author;
	this->description = description;
	this->publisher = publisher;
	this->city = city;
	this->year = year;
	this->series = series;
*/
}

void Book::display() const
{
	cout << "\n--BOOK--" << endl;
	cout << "Call number- " << call_number << endl
		  << "Title- " << title << endl
		  << "Subjects- " << subjects << endl
		  << "Author- " << author << endl
		  << "Description- " << description << endl
		  << "Publisher- " << publisher << endl
		  << "City- " << city << endl
		  << "Year- " << year << endl
		  << "Series- " << series << endl
		  << "Notes- " << notes << endl;
}

bool Book::compare_other(const string str) const
{
	size_t nbytes1 = this->description.find(str);
	if(nbytes1 != string::npos)
	{
		return true;
	}
	
	size_t nbytes2 = this->notes.find(str);
	if(nbytes2 != string::npos)
	{
		return true;
	}

	size_t nbytes3 = this->year.find(str);
	if(nbytes3 != string::npos)
	{
		return true;
	}

	return false;
}
