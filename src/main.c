#include <stdio.h>
#include <stdint.h>
/*#include <print_board.h>*/
/*#include <bitboard.h>*/
#include <ansi_codes.h>
#include <term_draw.h>

int print_board(char* b, uint8 rows, uint8 cols){
	/* assume b is valid character array*/
	uint8 r;
	char row_s[12] = 	"   |   |   ";
	char between_s[12] = 	"---|---|---";
	printf("\n");
	for(r = 0; r < rows; r++){
		row_s[1] = b[r * cols + 0];
		row_s[5] = b[r * cols + 1];
		row_s[9] = b[r * cols + 2];
		td_puts(row_s, FG_CYAN, BG_DEFAULT);
		td_reset_colour();
		printf("\n");
		td_puts(between_s, FG_CYAN, BG_DEFAULT);
		td_reset_colour();
		printf("\n");
	}
	td_cursor_up(1);
	td_clear_line();
	return 0;
}

int check_win(char* b){
	/* assume 3x3 */
	uint8 i;
	for ( i = 0; i < 3; i++){
		if ((b[i] == b[i+3]) && (b[i] == b[i+6])){
			return 1; /* vertical wins */
		}
		if ((b[3*i] == b[3*i+1]) && (b[3*i] == b[3*i+2])){
			return 1; /* horizontal wins */
		}
	}
	if ((b[1] == b[5]) && (b[1]  == b[9])){
		return 1; /* diagonal win 1 */
	}
	if ((b[3] == b[5]) && (b[3] == b[7])){
		return 1; /* diagonal win 2 */
	}
	return 0;
		
		
		
}

char get_input(){
	int c, x;
	c = getchar();
	while ((x = getchar()) != '\n' && x != EOF); /* discard the rest of the line */
	return c;
}

int input_valid(char* b, char* c_invalid, uint8 size, int c){
	/* ascii 0 starts at 48 */
	int i = c-48;
	if(i < 0 || i > 8){
		return 0; /* invalid input */
	}
	uint8 j;
	for (j = 0; j < size; j++){
		if ( b[i] == c_invalid[j] ){
			return 0;
		}
	}
	return 1;
}

int make_move(char* b, int c, char piece){
	if(input_valid(b, "XO", 2, c)){
		b[c-48] = piece;
	}
	return 0;
}

int main(){
	char board[10] = "012345678";
	int c;
	char player = 'X';
	while(1){
		print_board(board, 3, 3);
		td_reset_colour();
		printf("\n");	
		printf("Player %c press a number: ", player);
		c = get_input();
		if (input_valid(board, "XO", 2, c)){
			board[c-48] = player;
			if(check_win(board)){
				break;
			}
			if(player == 'X'){
				player = 'O';
			}
			else{
				player = 'X';
			}
		}
		else {
			printf(" invalid input\n");
		}
		make_move(board, c, 'X');
		if (c == 'q'){
			printf("Exiting!\n");
			return 0;
		}
	}
	print_board(board, 3, 3);
	printf("Player %c wins!\n", player);
	return 0;
}
