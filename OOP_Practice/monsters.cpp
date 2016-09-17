#include <iostream>
using namespace std;

enum class Monster
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Description
{
	Monster type;
	string name;
	int health;
};

string getMonsterType(Description monster);

void printMonster(Description monster);

int main()
{
	Description ogre = {Monster::OGRE, "Ragnorak", 2000};
	Description slime = {Monster::SLIME, "Chauncy", 1000};
	
	printMonster(ogre);
	printMonster(slime);

	return 0;
}

string getMonsterType(Description monster)
{
	if(monster.type == Monster::OGRE)
		return "Ogre";
	else if(monster.type == Monster::DRAGON)
		return "Dragon";
	else if(monster.type == Monster::ORC)
		return "Orc";
	else if(monster.type == Monster::GIANT_SPIDER)
		return "Giant Spider";
	else if(monster.type == Monster::SLIME)
		return "Slime";
	else
		return "";
}

void printMonster(Description monster)
{
	string type = getMonsterType(monster);

	cout << "This is " << monster.name << " the " << type  << endl;
	cout << "IT's health is " << monster.health << endl;
}
