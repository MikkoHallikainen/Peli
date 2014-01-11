#ifndef CELL_H
#define CELL_H

#include "Creature.h"

class Cell
{
	public:
		bool getAccessible();
		int getTerrain();
		void setOccupiedCreature(Creature);
		Creature getOccupiedCreature();

		Cell(bool, int);

	private:
		int m_uniqueID;
		int m_terrain;
		bool m_accessible;
		Creature m_occupiedCreature;

};

#endif