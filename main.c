#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]) {
	srand(time(0));
	int secret_number, guess, start_game, win=0, loss=0 , i=1;
	do{
	printf("\n=============== Welcome to the number guessing game! ===============\n");
	printf("DO YOU WANT TO START? (1 = YES, 0 = NO)\n");
	scanf("%d", &start_game);
	if(start_game!=1 && start_game!=0){
		printf("Enter valid value\n");
		break;
	}
	else if(start_game == 1){
		secret_number = (rand() % 100) + 1;
		printf("GUESS YOUR NUMBER BETWEEN (1-100).. YOU GET EIGHT ATTEMPTS\n");
		printf("THIS IS ATTEMPT NO. %d\n", i);
		scanf("%d", &guess);
		if(guess == secret_number){
			win++;
			printf("YOU WON!\n");
			printf("\n========== SCORE SUMMARY ==========\n");
			printf("WIN: %d   LOSS: %d\n", win, loss);
			printf("DO YOU WANT TO PLAY AGAIN? (1 = YES, 0 = NO)\n");
			scanf("%d", &start_game);
			if(start_game == 1){
			i=1;
			continue;
			}
			if(start_game!=1 && start_game!=0){
			printf("Enter valid value\n");
			break;
			}
		}
		else{
		
			for(i=2; i<=8 && guess != secret_number;  i++){
			if(guess>secret_number){
				printf("Guess lower\n");
			}
			if(guess<secret_number){
				printf("Guess higher\n");
			}
			printf("TRY AGAIN!! THIS IS ATTEMPT NO. %d\n", i);
			scanf("%d", &guess);
	}
	}
	}
		
		if(guess == secret_number && start_game !=0){
			win++;
			printf("YOU WON!\n");
			printf("\n========== SCORE SUMMARY ==========\n");
			printf("WIN: %d   LOSS: %d\n", win, loss);
			printf("DO YOU WANT TO PLAY AGAIN? (1 = YES, 0 = NO)\n");
			scanf("%d", &start_game);
			if(start_game == 1){
				i=1;
				continue;
			}
				if(start_game!=1 && start_game!=0){
				printf("Enter valid value\n");
				break;
			}
		}
		else if (guess != secret_number && start_game != 0){
			loss++;
			printf("YOU LOST! BETTER LUCK NEXT TIME\n");
			printf("THE SECRET NUMBER WAS %d\n", secret_number);
			printf("WIN: %d   LOSS: %d\n", win, loss);
			printf("DO YOU WANT TO PLAY AGAIN? (1 = YES, 0 = NO)\n");
			scanf("%d", &start_game);
			if(start_game == 1){
				i=1;
				continue;
			}
			if(start_game!=1 && start_game!=0){
				printf("Enter valid value\n");
				break;
			}
			}
		}	while(start_game != 0);
		printf("\n============ THANK YOU FOR PLAYING! ============\n");
	
	return 0;
	}


