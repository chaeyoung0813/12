#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check_gameEnd(void){
	int res=BINGO_RES_UNFINISHED;
	if (bingo_countCompletedline()>=N_LINE){
		
	}
}
int get_number(void){
	int selNum=0;
	do {
		printf("select a number :");
		scanf("%d", &selNum);
		fflush (stdin);
		
		if (selNum <1 || selNum > (N_SIZE)*(N_SIZE) || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not ont the board! select other one.\n", selNum);
		} 
		}while (selNum <1 || selNum > (N_SIZE)*(N_SIZE) || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
		
		return selNum;
}

int main(int argc, char *argv[]) {
	
	srand((unsigned) time(NULL));
	//opening 
	printf("====================================\n");
	printf("************************************\n");
	printf("	♥BINGO GAME♥		\n");
	printf("************************************\n");
	printf("====================================\n\n\n");
	
	// generate numbers
	bingo_init();
	bingo_printBoard();
	bingo_inputNum(20);
	bingo_printBoard();
	//initalize bingo boards
	//while (game is not end) //줄 수가 N_BINGO보다 작음
	
	
	bingo_init();
	
	while (check_gameEnd()==BINGO_RES_UNFINISHED){
		//bingo board printing
		bingo_printBoard();
		//print number of completed lines
		printf("No, of completed line : %i\n", bingo_countCompletedline());
		//select a proper number
		int selNum=get_number();
		//update the board status
		bingo_inputNum(selNum);
	}
	

	bingo_printBoard();
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	printf("====================================\n");
	printf("************************************\n");
	printf("	♬CONGRATULATIONS!!!♬			\n");
	printf("	 BINGO!♣			\n");
	printf("	♥YOU WIN!!!!♥		\n");
	printf("====================================\n");
	printf("************************************\n\n");
	
	
	
	return 0;
}
