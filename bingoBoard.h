#define N_SIZE 8 
#define BINGO_NUMSTATUS_ABSENT -1
#define BINGO_NUMSTATUS_PRESENT 6
#define N_LINE 10
#define BINGO_RES_UNFINISHED 4
void bingo_init(void);
int bingo_countCompletedline(void);
void bingo_inputNum(int sel);
int bingo_countCompletedline(void);
int bingo_checkNum(int selNum);
void bingo_printBoard(void);
