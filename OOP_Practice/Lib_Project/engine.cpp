#include "book.h"
#include "video.h"
#include "Media.h"
#include "engine.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

Engine::Engine()
{
	read_book();
	read_video();
}

Engine::~Engine()
{
	int size = Catalog.size();
	for(int i = 0; i < size; i++)
	{
		Media *card = Catalog[i];
		delete card;
	}
}

void Engine::read_book()
{
	string line;
	ifstream book("book.txt");

	string call_num, title, subjects, author, description,
			 publisher, city, year, series, notes;

	while(getline(book, line))
	{
		stringstream ss(line);
		getline(ss, call_num, '|');
		getline(ss, title, '|');
		getline(ss, subjects, '|');
		getline(ss, author, '|');
		getline(ss, description, '|');
		getline(ss, publisher, '|');
		getline(ss, city, '|');
		getline(ss, year, '|');
		getline(ss, series, '|');
		getline(ss, notes, '|');

		Book *bk = new Book(call_num, title, subjects, author,
								description, publisher, city, year, series, notes);

		Catalog.push_back(bk);
	}
	book.close();
}

void Engine::read_video()
{
	string line;
	ifstream video("video.txt");

	string call_num, title, subjects, description,
			 distributor, notes, series, label;

	while(getline(video, line))
	{
		stringstream ss(line);
		getline(ss, call_num, '|');
		getline(ss, title, '|');
		getline(ss, subjects, '|');
		getline(ss, description, '|');
		getline(ss, distributor, '|');
		getline(ss, notes, '|');
		getline(ss, series, '|');
		getline(ss, label, '|');

		Video *vd = new Video(call_num, title, subjects, description,
								distributor, notes, series, label);

		Catalog.push_back(vd);
	}
	video.close();
}

vector<Media*> Engine::search_call_number(const string &word) const
{
	int size = Catalog.size();
	vector<Media*>Result;

	for(int i = 0; i < size; i++)
	{
		Media *card = Catalog[i];
		if(card->compare_callNum(word))
		{
			Result.push_back(card);
		}
	}
	return Result;
}

vector<Media*> Engine::search_title(const string &word) const
{
	int size = Catalog.size();
	vector<Media*>Result;

	for(int i = 0; i < size; i++)
	{
		Media *card = Catalog[i];
		if(card->compare_title(word))
		{
			Result.push_back(card);
		}
	}
	return Result;
}

vector<Media*> Engine::search_subjects(const string &word) const
{
	int size = Catalog.size();
	vector<Media*>Result;

	for(int i = 0; i < size; i++)
	{
		Media *card = Catalog[i];
		if(card->compare_subjects(word))
		{
			Result.push_back(card);
		}
	}
	return Result;
}

vector<Media*> Engine::search_other(const string &word) const
{
	int size = Catalog.size();
	vector<Media*>Result;

	for(int i = 0; i < size; i++)
	{
		Media *card = Catalog[i];
		if(card->compare_other(word))
		{
			Result.push_back(card);
		}
	}
	return Result;
}

void Engine :: print()
{
	for(int i = 0; i < 10; i++)
	{
		Media *card = Catalog[i];
		card->display();
	}
}
