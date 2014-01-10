#include <iostream>
#include <string>
#include "Creature.h"

int main() {
	// Alustetaan pointteri creature, luokassa Creature. Pointteri osoittaa, mistä kohtaa muistissa luokan instanssi "alkaa".
	// Luodaan tähän kohtaan Creature-luokan instanssi parametreillä "Hami Sirviö", 3 ja 4.
	Creature * creature = new Creature("Hami Sirviö", 3, 4);
	// Tulostetaan (cout) creature-instanssin funktion getName() palauttama tieto.
	std::cout << creature->getName() << std::endl;
}