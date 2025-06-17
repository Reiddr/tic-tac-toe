#include <term_draw.h>

static char* _print_cmd_create(char* fg, char* bg){
	static char code[20];
	sprintf(code, "%s%s;%s;%s%s", ESC, RESET_M, fg, bg, MODE);
	return code;
}

/* get length of string */
uint16 _s_len_get(char* s){
	return sizeof(s)/sizeof(char) -1;
}

/* create a char terminal code with a foreground and background colour */
char* td_putc(char c, char* fg, char* bg){
	static char code[20];
	sprintf(code, "%s%s;%s;%s%s%c%s", ESC, RESET_M, fg, bg, MODE, c, RESET);
	return code;
}

/* create a string with a foreground and background colour */
char* td_puts(char* s, char* fg, char* bg){
	static char code[50];
	sprintf(code, "%s%s;%s;%s%s%c%s", ESC, RESET_M, fg, bg, MODE, s, RESET);
	return code;
}
