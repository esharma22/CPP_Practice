#ifndef ENGINE_H
#define ENGINE_H
#include "Media.h"
#include <iostream>
#include <vector>
using namespace std;

class Engine
{
	private:
				void read_book();
			   void read_video();	
				vector<Media*>Catalog;

	public:
			  Engine();
			  ~Engine();
			  vector<Media*>search_call_number(const string &word) const;
			  vector<Media*>search_title(const string &word) const;
			  vector<Media*>search_subjects(const string &word) const;
			  vector<Media*>search_other(const string &word) const;
				void print();
};

#endif
