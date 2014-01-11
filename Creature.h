#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature
{
	public:
		std::string getName();
		int getMaxHP();
		int getCurrentHP();

		Creature(std::string, int, int);
		Creature();
		
	private:
		std::string m_name;
		int m_maxHP;
		int m_currentHP;

};

#endif