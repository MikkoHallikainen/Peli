class Cell
{
	public:
		bool getAccessible;
		int getNeighbours;
		int getTerrain;
		Creature getOccupiedCreature
	private:
		int uniqueID;
		int terrain;
		bool accessible;
		Creature occupiedCreature;
		
};