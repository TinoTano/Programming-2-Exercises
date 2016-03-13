#include <iostream>
#include <string>
#include <cstdlib>
#include "World.h"
#include "Player.h"
#include "Rooms.h"
#include "Exits.h"

using namespace std;

void World::Create_World_Init(){ // Ask for player name and gang side
	cout << "Whats your name? ";
	getline(cin, player->name);
	if (player->name == "q"){
		exit(0); // finish game if player press letter q + enter
	}
	while (1){
		cout << "On which side you want to start ? East or West ? ";
		getline(cin, player->gang_side);
		if (player->gang_side == "q"){
			exit(0); // finish game if player press letter q + enter
		}
		if (player->gang_side == "east" || player->gang_side == "e"){
			room->Room_info(East_side_suburbs);
			exits->Exits_info(East_side_suburbs);
			room->actual_room = East_side_suburbs;
			break;
		}
		else if (player->gang_side == "west" || player->gang_side == "w"){
			room->Room_info(West_side_suburbs);
			exits->Exits_info(West_side_suburbs);
			room->actual_room = West_side_suburbs;
			break;
		}
		else{
			cout << "This is not a side!" << endl;
		}
	}
	cout << "Hello " << player->name << " from " << player->gang_side << " Side. Your adventure starts here..." << endl;
	Create_World_Loop();
}

void World::Create_World_Loop(){
	while (1){
		cout << "You are in the " << room->name << ". " << room->description << endl;
		for (int i = 0; i < exits->exits.size(); i++){
			cout << "You can go to " << exits->exits[i] << endl;
		}
		exits->exits.clear();
		while (1){
			cout << "Where you want to go? ";
			getline(cin, exits->direction);
			if (exits->direction == "q"){
				exit(0); // finish game if player press letter q + enter
			}
			switch (room->actual_room){  //Check actual room after going to the direction and set room info
			case West_side_suburbs:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Destroyed_hospital);
					exits->Exits_info(Destroyed_hospital);
					room->actual_room = Destroyed_hospital;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Little_casino);
					exits->Exits_info(Little_casino);
					room->actual_room = Little_casino;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Destroyed_hospital:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Up_town);
					exits->Exits_info(Up_town);
					room->actual_room = Up_town;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Little_casino);
					exits->Exits_info(Little_casino);
					room->actual_room = Little_casino;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(The_club);
					exits->Exits_info(The_club);
					room->actual_room = The_club;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(West_side_suburbs);
					exits->Exits_info(West_side_suburbs);
					room->actual_room = West_side_suburbs;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Little_casino:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Destroyed_hospital);
					exits->Exits_info(Destroyed_hospital);
					room->actual_room = Destroyed_hospital;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Down_town);
					exits->Exits_info(Down_town);
					room->actual_room = Down_town;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(Abandoned_medical_center);
					exits->Exits_info(Abandoned_medical_center);
					room->actual_room = Abandoned_medical_center;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(West_side_suburbs);
					exits->Exits_info(West_side_suburbs);
					room->actual_room = West_side_suburbs;
				}
				else if (exits->direction == "north east" || exits->direction == "ne"){
					room->Room_info(Sports_center);
					exits->Exits_info(Sports_center);
					room->actual_room = Sports_center;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Town_hall:
				if (exits->direction == "south east" || exits->direction == "se"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Sports_center:
				if (exits->direction == "south west" || exits->direction == "sw"){
					room->Room_info(Little_casino);
					exits->Exits_info(Little_casino);
					room->actual_room = Little_casino;
				}
				else if (exits->direction == "north east" || exits->direction == "ne"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Up_town:
				if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(Destroyed_hospital);
					exits->Exits_info(Destroyed_hospital);
					room->actual_room = Destroyed_hospital;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(The_club);
					exits->Exits_info(The_club);
					room->actual_room = The_club;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Central_garden:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Up_town);
					exits->Exits_info(Up_town);
					room->actual_room = Up_town;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Down_town);
					exits->Exits_info(Down_town);
					room->actual_room = Down_town;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(East_side_suburbs);
					exits->Exits_info(East_side_suburbs);
					room->actual_room = East_side_suburbs;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(West_side_suburbs);
					exits->Exits_info(West_side_suburbs);
					room->actual_room = West_side_suburbs;
				}
				else if (exits->direction == "north west" || exits->direction == "nw"){
					room->Room_info(Town_hall);
					exits->Exits_info(Town_hall);
					room->actual_room = Town_hall;
				}
				else if (exits->direction == "north east" || exits->direction == "ne"){
					room->Room_info(Central_station);
					exits->Exits_info(Central_station);
					room->actual_room = Central_station;
				}
				else if (exits->direction == "south west" || exits->direction == "sw"){
					room->Room_info(Sports_center);
					exits->Exits_info(Sports_center);
					room->actual_room = Sports_center;
				}
				else if (exits->direction == "down" || exits->direction == "d"){
					room->Room_info(Sewers);
					exits->Exits_info(Sewers);
					room->actual_room = Sewers;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Down_town:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(Abandoned_medical_center);
					exits->Exits_info(Abandoned_medical_center);
					room->actual_room = Abandoned_medical_center;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(Little_casino);
					exits->Exits_info(Little_casino);
					room->actual_room = Little_casino;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Central_station:
				if (exits->direction == "south west" || exits->direction == "sw"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else if (exits->direction == "north east" || exits->direction == "ne"){
					room->Room_info(The_club);
					exits->Exits_info(The_club);
					room->actual_room = The_club;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Sewers:
				if (exits->direction == "up" || exits->direction == "u"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case The_club:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(Up_town);
					exits->Exits_info(Up_town);
					room->actual_room = Up_town;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(East_side_suburbs);
					exits->Exits_info(East_side_suburbs);
					room->actual_room = East_side_suburbs;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Abandoned_medical_center);
					exits->Exits_info(Abandoned_medical_center);
					room->actual_room = Abandoned_medical_center;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(Destroyed_hospital);
					exits->Exits_info(Destroyed_hospital);
					room->actual_room = Destroyed_hospital;
				}
				else if (exits->direction == "south west" || exits->direction == "sw"){
					room->Room_info(Central_station);
					exits->Exits_info(Central_station);
					room->actual_room = Central_station;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case Abandoned_medical_center:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(The_club);
					exits->Exits_info(The_club);
					room->actual_room = The_club;
				}
				else if (exits->direction == "east" || exits->direction == "e"){
					room->Room_info(East_side_suburbs);
					exits->Exits_info(East_side_suburbs);
					room->actual_room = East_side_suburbs;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Down_town);
					exits->Exits_info(Down_town);
					room->actual_room = Down_town;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(Little_casino);
					exits->Exits_info(Little_casino);
					room->actual_room = Little_casino;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			case East_side_suburbs:
				if (exits->direction == "north" || exits->direction == "n"){
					room->Room_info(The_club);
					exits->Exits_info(The_club);
					room->actual_room = The_club;
				}
				else if (exits->direction == "south" || exits->direction == "s"){
					room->Room_info(Abandoned_medical_center);
					exits->Exits_info(Abandoned_medical_center);
					room->actual_room = Abandoned_medical_center;
				}
				else if (exits->direction == "west" || exits->direction == "w"){
					room->Room_info(Central_garden);
					exits->Exits_info(Central_garden);
					room->actual_room = Central_garden;
				}
				else{
					cout << "This is not a direction!" << endl;
					continue;
				}
				break;
			}
			break;
		}
	}
	Create_World_End();
}

void World::Create_World_End(){
	delete exits;
	delete room;
	delete player;
}