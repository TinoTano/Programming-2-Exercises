#include <stdio.h>

int main(){

	char* House[5][5] = { 
	{ '#', '#',    '#'   ,  '#'  , '#', },
	{ '#', '#', "Kitchen", "Pantry", '#', },
	{ '#', '#', "Dinning Room", "Bathroom", '#', },
	{ '#', '#', "Bedroom" ,  '#'  , '#', },
	{ '#', '#',  '#'  ,  '#'  , '#', },
	};

	char direction;
	int player_pos_x = 2;
	int player_pos_y = 2;

	printf("You are in the Dinning room. ");

	while (1){
		printf("Which direction you want to go now? (n/s/e/w) or quit(q)? ");
		scanf_s("%c", &direction, 1);
		getchar();

		switch (direction){
		case 'n':
			if (House[player_pos_y - 1][player_pos_x] != '#'){
				player_pos_y -= 1;
				printf("You are in the %s. ", House[player_pos_y][player_pos_x]);
			}
			else{
				printf("There is a wall there. You cannot pass! \n");
			}
			break;
		case 's':
			if (House[player_pos_y + 1][player_pos_x] != '#'){
				player_pos_y += 1;
				printf("You are in the %s. ", House[player_pos_y][player_pos_x]);
			}
			else{
				printf("There is a wall there. You cannot pass! \n");
			}
			break;
		case 'e':
			if (House[player_pos_y][player_pos_x + 1] != '#'){
				player_pos_x += 1;
				printf("You are in the %s. ", House[player_pos_y][player_pos_x]);
			}
			else{
				printf("There is a wall there. You cannot pass! \n");
			}
			break;
		case 'w':
			if (House[player_pos_y][player_pos_x - 1] != '#'){
				player_pos_x -= 1;
				printf("You are in the %s. ", House[player_pos_y][player_pos_x]);
			}
			else{
				printf("There is a wall there. You cannot pass! \n");
			}
			break;
		case 'q':
			return 0;
			break;
		default: printf("Come on... This is not a direction!\n");
		}
	}

	getchar();
	return 0;
}