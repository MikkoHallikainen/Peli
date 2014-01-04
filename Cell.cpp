class Cell{
	Cell::Cell(bool accessible, int ID); // constructor
	{
	    v_accessible = accessible;
	}
	/*
	 * Returns boolean value which tells
	 * whether or not the cell is accessible
	 * by creatures.
	 */
	bool getAccessible {
		return true;
	}
		/*
	 * Returns amount of cells which are neigbours.
	 */
	int getNeighbours{
		return 0;
	}
	
	// Dummy-toteutus. Pit‰‰ mietti‰ kunnolla.
	int getTerrain {
		return 0;
	}
	/*
	 * Pit‰‰ taas mietti‰, miten t‰m‰ menee.
		Creature getOccupiedCreature {
		return ;
		}
	 */
}