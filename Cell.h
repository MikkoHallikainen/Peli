class Cell
{
	public:
		bool getAccessible();
		int getNeighbours();
		int getTerrain();
		Creature getOccupiedCreature()
	private:
		int v_uniqueID;
		int v_terrain;
		bool v_accessible;
		Creature i_occupiedCreature;
	
};