#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include "Media.h"
using namespace std;

class Video : public Media
{
	private:
			  string call_number;
			  string title;
			  string subjects;
			  string description;
			  string distributor;
			  string notes;
			  string series;
			  string label;

	public:
			  Video(string,
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
