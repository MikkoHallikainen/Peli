#include <string>
#include "Creature.h"

Creature::Creature(std::string name, int maxHP, int currentHP){
	m_name = name;
	m_maxHP = maxHP;
	m_currentHP = currentHP;
}

std::string Creature::getName(){
	return m_name;
}

int Creature::getMaxHP(){
	return m_maxHP;
}
int Creature::getCurrentHP(){
	return m_currentHP;
}