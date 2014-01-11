#include <string>
#include "Creature.h"

Creature::Creature(std::string name, int maxHP, int currentHP)
{
	m_name = name;
	m_maxHP = maxHP;
	m_currentHP = currentHP;
}

Creature::Creature()
{
	m_name = "Hami Sirviö";
	m_maxHP = 10;
	m_currentHP = 10;
}

std::string Creature::getName()
{
	return m_name;
}

int Creature::getMaxHP()
{
	return m_maxHP;
}

int Creature::getCurrentHP()
{
	return m_currentHP;
}