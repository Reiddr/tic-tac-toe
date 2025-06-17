#include <stdio.h>
#include <stdint.h>
/*#include <print_board.h>*/
/*#include <bitboard.h>*/
#include <ansi_codes.h>
#include <term_draw.h>

int main(){
/*	uint64_t white_pieces[BB_T_COUNT]; 
	bb_populate_pieces(white_pieces);
	uint8_t i;
	for(i=BB_T_PAWN; i<BB_T_COUNT; i++){
		printf("%c\n", bb_get_piece_char(i));
		bitboard_print(white_pieces[i]); 
	}
*/
	printf("%i\n", _s_len_get("yes"));
	printf("sizeof(\"yesn\"): %i\n", _s_len_get("yesn"));
	printf("%i\n", sizeof(char));
	printf("sizeof(string)%i\n", sizeof("12345678"));
	printf("%i\n", sizeof(unsigned char));
	char c = 'b';
	printf("%i\n", sizeof(c));
	char s[5] = "1234567";
	printf("%i\n", sizeof(s));
	printf("sizeof(*s): %i\n", sizeof(*s));
	printf("sizeof(s[0]): %i\n", sizeof(s[0]));
	printf("sizeof(s[1]): %i\n", sizeof(s[1]));
	printf("%s\n", td_putc('B', FG_RED, BG_BLUE));
	return 0;
}
