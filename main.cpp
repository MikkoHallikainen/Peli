#include <iostream>
#include <string>
#include "Creature.h"
#include "Cell.h"

int main() {
	// Alustetaan pointteri creature, luokassa Creature. Pointteri osoittaa, mist� kohtaa muistissa luokan instanssi "alkaa".
	// Luodaan t�h�n kohtaan Creature-luokan instanssi parametreill� "Hami Sirvi�", 3 ja 4.
	Creature *creature = new Creature("Hami Sirvi�", 3, 4);
	// Tulostetaan (cout) creature-instanssin funktion getName() palauttama tieto..
	std::cout << creature->getName() << std::endl;
	Cell *cell01 = new Cell(true, 1);
	cell01->setOccupiedCreature(*creature);
	std::cout << "Haetaan sama samaisen otuksen nimi Cell-luokan instanssista: " << cell01->getOccupiedCreature().getName() << std::endl;
}