#ifndef Creature_h
#define Creature_h

class Creature
{
	public:
		//std::string getName();
		int getMaxHP();
		int getCurrentHP();
		//inline Creature(std::string, int, int);
		inline Creature(int, int);

	private:
		//std::string m_name;
		int m_maxHP;
		int m_currentHP;

};

#endif