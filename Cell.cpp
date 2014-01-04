class Cell{
	Cell::Cell(bool accessible, int ID) // constructor
	{
	    v_accessible = accessible;
		v_uniqueID = ID;
	}

	/*
	 * Returns boolean value which tells
	 * whether or not the cell is accessible
	 * by creatures.
	 */
	bool Cell::getAccessible() {
		return v_accessible;
	}
		/*
	 * Returns amount of cells which are neigbours.
	 */
	int Cell::getNeighbours(){
		return 0;
	}
	
	// Dummy-toteutus. Pit‰‰ mietti‰ kunnolla.
	int Cell::getTerrain() {
		return 0;
	}
	/*
	 * Pit‰‰ taas mietti‰, miten t‰m‰ menee.
		Creature getOccupiedCreature {
		return ;
		}
	 */
}