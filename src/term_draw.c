#include <term_draw.h>

/* create a string with a foreground and background colour */
int td_puts(char* s, char* fg, char* bg){
	printf("%s%s%s", fg, bg, s);
	return 0;
}

/* create a string with a foreground and background colour */
int td_puts(char* s, char* fg, char* bg){
	printf("%s%s%s", fg, bg, s);
	return 0;
}

/* clear the screen */
int td_clear_screen(void){
	printf(CLEAR_SCREEN);
	return 0;
}

/* clear the line the cursor is on */
int td_clear_line(void){
	printf(CLEAR_LINE);
	return 0;
}

