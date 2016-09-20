#include "video.h"
#include <iostream>

using namespace std;

Video::Video(string call_number,
				 string title,
				 string subjects,
				 string description,
				 string distributor,
				 string notes,
				 string series,
				 string label) : Media(call_number, title, subjects, notes), description(description), distributor(distributor), series(series), label(label)
{
	
}

void Video::display() const
{
	cout << "\n--VIDEO--" << endl;
	cout << "Call Number- " << call_number << endl
		  << "Title- " << title << endl
		  << "Subjects- " << subjects << endl
		  << "Description- " << description << endl
		  << "Distributor- " << distributor << endl
		  << "Notes- " << notes << endl
		  << "Series- " << series << endl
		  << "Label- " << label << endl;
}

bool Video::compare_other(const string str) const
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

	size_t nbytes3 = this->distributor.find(str);
	if(nbytes3 != string::npos)
	{
		return true;
	}

	return false;
}
