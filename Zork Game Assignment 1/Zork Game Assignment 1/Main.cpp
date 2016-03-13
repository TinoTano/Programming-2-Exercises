#include <iostream>
#include <conio.h>
#include "World.h"
#include "MemLeaks.h"

using namespace std;

int main(){

	ReportMemoryLeaks();

	cout << " _____                     _    _                 " << "\n";
	cout << "|  __ \                   | |  | |                " << "\n";
	cout << "| |  \/ __ _ _ __   __ _  | |  | | __ _ _ __ ___  " << "\n";
	cout << "| | __ / _` | '_ \ / _` | | |/\| |/ _` | '__/ __| " << "\n";
	cout << "| |_\ \ (_| | | | | (_| | \  /\  / (_| | |  \__ \ " << "\n";
	cout << "\____ /\__,_|_| |_|\__, | \ / \ /\__,_ |_|  |___/ " << "\n";
	cout << "                    __/ |                         " << "\n";
	cout << "                   |___/                          " << "\n";
	
	
	cout << "Welcome to Gang Wars" << endl;

	World world;
	
	world.Create_World_Init();
	
	cout << "Thanks for playing. Bye!" << endl;

	return 0;
}