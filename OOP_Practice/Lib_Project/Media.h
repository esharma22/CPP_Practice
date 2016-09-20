#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
using namespace std;

class Media
{
	protected:
				 string call_number;
				 string title;
				 string subjects;
				 string notes;

	public:
				Media(string,
						string,
						string,
						string);
				virtual ~Media();
				virtual void display() const = 0;
				virtual bool compare_other(const string str) const = 0;
				bool compare_title(const string str) const;
				bool compare_callNum(const string str) const;
				bool compare_subjects(const string str) const;
};

#endif
