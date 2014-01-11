#include "Cell.h"
#include "Creature.h"

/*
 * Cell represents one location in the game board. Player or
 * any other creature may enter the cell object if it's
 * accessible. Cell may contain other functionalities such
 * traps, it may slow the creature down or it could be blocked
 * by a door which could be opened.
 *
 * Constructor:
 *	parameters
 *		- bool accessible
 *		Defines wether or not the cell is accessible by creatures.
 *		- int uniqueID
 *		Unique identified which is used to bind a web of cells to
 *		represent a map in higher level classes.
 *		***TBD***
 *		- Terrain type. Toteutetaanko esim enumerationeilla?
 *		  Uuden luokan tekeminen t‰t‰ varten tuntuu huonolta idealta.
 *		- Special rules for the cell. These could represent a traps
 *		  or any other special features.
 */

	/*
		cell(id, tyyppi, attribuutit)
			-id++
		***TBD*** Siirret‰‰n karttaolioon, kun moinen on luotu
		kartta: id, naapuri1 - naapuri6
		(kun painan speissi‰, kuulen kohinaa.)

		attribuutit:
			-voiko menn‰
			-action() ***TBD*** Pit‰‰ luoda jokin pelin flow'sta huolta pit‰v‰ luokka.
				-ovi?

	*/

Cell::Cell(bool accessible, int uniqueID)
{
    m_accessible = accessible;
	m_uniqueID = uniqueID;
}

/*
 * Returns boolean value which tells whether or not the cell
 * is accessible by creatures.
 */
bool Cell::getAccessible()
{
	return m_accessible;
}

// Dummy-toteutus. Pit‰‰ mietti‰ kunnolla.
//int Cell::getTerrain() {
//	return 0;
//}

/*
 * Returns occupied creature.
 */
Creature Cell::getOccupiedCreature()
{
	return m_occupiedCreature;
}

/*
 * Set occupied creature.
 */
void Cell::setOccupiedCreature(Creature creature){
	m_occupiedCreature = creature;
}