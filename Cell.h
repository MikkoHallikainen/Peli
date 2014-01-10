#include "Creature.h"

class Cell
{
	public:
		bool getAccessible();
		int getNeighbours();
		int getTerrain();
		Creature getOccupiedCreature();

		Cell()

	private:
		int m_uniqueID;
		int m_terrain;
		bool m_accessible;
		Creature i_occupiedCreature;
		/*
			cell(id, tyyppi, attribuutit)  
				-id++
			kartta: id, naapuri1 - naapuri6
			(kun painan speissiä, kuulen kohinaa.)

			attribuutit:
				-voiko mennä
				-action()
					-ovi?

		*/
};