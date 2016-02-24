#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	//board to place the ships
	char board[12][14] = {
		{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' },
		{ ' ', ' ', '0', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '1', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '2', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '3', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ 'Y', ' ', '4', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '5', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '6', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '7', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '8', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '9', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' } };

	//board to show in the game
	char board_view[12][14] = {
		{ ' ', ' ', ' ', ' ', ' ', '  ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' },
		{ ' ', ' ', '0', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '1', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '2', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '3', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ 'Y', ' ', '4', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '5', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '6', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '7', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '8', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ ' ', ' ', '9', ' ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' } };

	do{
		//a ship
		int boat_x = rand() % 14 + 4;
		int boat_y = rand() % 12 + 2;
		if (board[boat_y][boat_x] == '~'){
			board[boat_y][boat_x] = 'a';
			break;
		}
	} while (1);

	do{
		//b ship
		int boat_x = rand() % 13 + 4;
		int boat_y = rand() % 12 + 2;
		if (board[boat_y][boat_x] == '~' && board[boat_y][boat_x + 1] == '~'){
			board[boat_y][boat_x] = 'b';
			board[boat_y][boat_x + 1] = 'b';
			break;
		}
	} while (1);

	do{
		//c ship
		int boat_x = rand() % 14 + 4;
		int boat_y = rand() % 9 + 2;
		if (board[boat_y][boat_x] == '~' && board[boat_y + 1][boat_x] == '~' && board[boat_y + 2][boat_x] == '~'){
			board[boat_y][boat_x] = 'c';
			board[boat_y + 1][boat_x] = 'c';
			board[boat_y + 2][boat_x] = 'c';
			break;
		}
	} while (1);

	do{
		//d ship
		int boat_x = rand() % 10 + 4;
		int boat_y = rand() % 12 + 2;
		if (board[boat_y][boat_x] == '~' && board[boat_y][boat_x + 1] == '~' && board[boat_y][boat_x + 2] == '~' && board[boat_y][boat_x + 3] == '~'){
			board[boat_y][boat_x] = 'd';
			board[boat_y][boat_x + 1] = 'd';
			board[boat_y][boat_x + 2] = 'd';
			board[boat_y][boat_x + 3] = 'd';
			break;
		}
	} while (1);

	int moves = 0;
	int a_ship_parts = 1;
	int b_ship_parts = 2;
	int c_ship_parts = 3;
	int d_ship_parts = 4;

	while (1){
		int attack_y;
		int attack_x;
		char* p = &board_view[0][0];

		printf("\n-------------------- Moves: %d \n", moves++);

		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 14; j++){
				printf("%c", *p);
				p++;
			}
			printf("\n");
		}

		if (a_ship_parts <= 0 && b_ship_parts <= 0 && c_ship_parts <= 0 && d_ship_parts <= 0){
			printf("\nYou have destroyed all the ships using %d moves! You won!\n", moves);
			break;
		}

		printf("\nWhere you want to attack?\n");
		printf("Y: ");
		scanf_s("%d", &attack_y);
		getchar();
		printf("X: ");
		scanf_s("%d", &attack_x);
		getchar();

		if (attack_x >= 10 || attack_y >= 10){
			printf("\nAttack coordinate is out of the map!\n");
		}
		else{
			if (board_view[attack_y + 2][attack_x + 4] != '~'){
				printf("\nYou have already attacked this coordinate!\n");
				continue;
			}
			if (board[attack_y + 2][attack_x + 4] == '~'){
				board_view[attack_y + 2][attack_x + 4] = 'M';
				board[attack_y + 2][attack_x + 4] = 'M';
				printf("\nMiss!\n");
			}
			else {
				board_view[attack_y + 2][attack_x + 4] = board[attack_y + 2][attack_x + 4];
				switch (board_view[attack_y + 2][attack_x + 4]){
				case 'a':
					a_ship_parts--;
					if (a_ship_parts == 0){
						printf("\nYou destroyed ship a!\n");
					}
					else{
						printf("\nYou hit ship a!\n");
					}
					break;
				case 'b':
					b_ship_parts--;
					if (b_ship_parts == 0){
						printf("\nYou destroyed ship b!\n");
					}
					else{
						printf("\nYou hit ship b!\n");
					}
					break;
				case 'c':
					c_ship_parts--;
					if (c_ship_parts == 0){
						printf("\nYou destroyed ship c!\n");
					}
					else{
						printf("\nYou hit ship c!\n");
					}
					break;
				case 'd':
					d_ship_parts--;
					if (d_ship_parts == 0){
						printf("\nYou destroyed ship d!\n");
					}
					else{
						printf("\nYou hit ship d!\n");
					}
					break;
				default:
					break;
				}
			}
		}
	}

	getchar();
	return 0;
}

