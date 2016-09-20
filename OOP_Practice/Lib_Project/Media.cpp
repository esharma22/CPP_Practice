#include "Media.h"
#include <iostream>

using namespace std;

Media::Media(string call_num, string title, string subjects, string notes):call_number(call_num), title(title), subjects(subjects), notes(notes)
{
/*
	this->call_number = call_num;
	this->title = title;
	this->subjects = subjects;
	this->notes = notes;
*/
}

Media::~Media()
{

}

bool Media::compare_callNum(const string str) const
{
	size_t pos = this->call_number.find(str);
	if(pos != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Media::compare_title(const string str) const
{
	size_t pos = this->title.find(str);
	if(pos != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Media::compare_subjects(const string str) const
{
	size_t pos = this->subjects.find(str);
	if(pos != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}
