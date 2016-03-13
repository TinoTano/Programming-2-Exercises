#include <iostream>
#include "Exits.h"

void Exits::Exits_info(areas area){
	switch (area){
	case West_side_suburbs:
		exits.push_back("Destroyed Hospital (north)");
		exits.push_back("Central Garden (East)");
		exits.push_back("Little Casino (South)");
		break;
	case Destroyed_hospital:
		exits.push_back("Up Town (north)");
		exits.push_back("The Club (east)");
		exits.push_back("Little Casino (south)");
		exits.push_back("West Side Suburbs (west)");
		break;
	case Little_casino:
		exits.push_back("Destroyed Hospital (north)");
		exits.push_back("Abandoned Medical Center (east)");
		exits.push_back("Down Town (south)");
		exits.push_back("West Side Suburbs (west)");
		exits.push_back("Sport Center (north east)");
		break;
	case Town_hall:
		exits.push_back("Central Garden (south east)");
	case Sports_center:
		exits.push_back("Little Casino (south west)");
		exits.push_back("Central Garden (north east)");
		break;
	case Up_town:
		exits.push_back("The club (east)");
		exits.push_back("Central Garden (south)");
		exits.push_back("Destroyed Hospital (west)");
		break;
	case Central_garden:
		exits.push_back("Up Town (north)");
		exits.push_back("East Side Suburbs (east)");
		exits.push_back("Down Town (south)");
		exits.push_back("West Side Suburbs (west)");
		exits.push_back("Town Hall (north west)");
		exits.push_back("Cental Station (north east)");
		exits.push_back("Sport Center (south west)");
		exits.push_back("Sewers (down)");
		break;
	case Down_town:
		exits.push_back("Central Garden (north)");
		exits.push_back("Abandoned Medical Center (east)");
		exits.push_back("Little Casino (west)");
		break;
	case Central_station:
		exits.push_back("Central Garden (south west)");
		exits.push_back("The Club (north east)");
		break;
	case Sewers:
		exits.push_back("Central Garden (up)");
		break;
	case The_club:
		exits.push_back("Up Town (north)");
		exits.push_back("East Side Suburbs (east)");
		exits.push_back("Abandoned Medical Center (south)");
		exits.push_back("Destroyed Hospital (west)");
		exits.push_back("Central Station (south west)");
		break;
	case Abandoned_medical_center:
		exits.push_back("The Club (north)");
		exits.push_back("East Side Suburbs (east)");
		exits.push_back("Down Town (south)");
		exits.push_back("Little Casino (west)");
		break;
	case East_side_suburbs:
		exits.push_back("The Club (north)");
		exits.push_back("Central Garden (west)");
		exits.push_back("Abandoned Medical Center (south)");
		break;
	}
}