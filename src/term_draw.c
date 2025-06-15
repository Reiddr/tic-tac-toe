#include <ansi_codes.h>
#include <term_draw.h>
#include <stdio.h>

char* _print_cmd_create(char* fg, char* bg){
	static char code[20];
	sprintf(code, "%s%s;%s;%s%s", ESC, RESET_M, fg, bg, MODE);
	return code;
}

int td_putc(char c, char* text_colour, char* bg_colour){
	return 0;
}
