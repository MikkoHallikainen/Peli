#include <string>

class Creature{
	
	Creature::Creature(String name, int maxHP, int currentHP){
		v_name = name;
		v_maxHP = maxHP;
		v_currentHP = currentHP;
	}

	String getName(){
		return v_name;
	}

	int getMaxHP(){
		return v_maxHP
	}
	int getCurrentHP(){
		return v_currentHP;
	}

}