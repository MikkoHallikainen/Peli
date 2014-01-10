#ifndef Creature_h
#define Creature_h

class Creature
{
	public:
		std::string getName();
		int getMaxHP();
		int getCurrentHP();
		Creature(std::string, int, int);
		
	private:
		std::string m_name;
		int m_maxHP;
		int m_currentHP;

};

#endif