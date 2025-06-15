#ifndef ANSI_CODES_H
#define ANSI_CODES_H

#define ESC		"\e["
#define CLEAR_SCREEN	"\e[2J"
#define CLEAR_LINE	"\e[2K"
#define RESET 		"\e[0m"
#define RESET_M		"0"
#define MODE 		"m"
#define DIM 		"2"

#define FG_BLACK   	"30"
#define FG_RED   	"31"
#define FG_GREEN 	"32"
#define FG_YELLOW	"33"
#define FG_BLUE 	"34"
#define FG_MAGENTA 	"35"
#define FG_CYAN 	"36"
#define FG_WHITE 	"37"
#define FG_DEFAULT 	"39"

#define BG_BLACK   	"40"
#define BG_RED   	"41"
#define BG_GREEN 	"42"
#define BG_YELLOW	"43"
#define BG_BLUE 	"44"
#define BG_MAGENTA 	"45"
#define BG_CYAN 	"46"
#define BG_WHITE 	"47"
#define BG_DEFAULT 	"49"

#define BG_GRAY 	"48;5;244m"
#define BG_BROWN	"48;5;94m"
#define FG_OFFWHITE	"38;5;253m"
#define FG_OFFBLACK	"38;5;234m"

#endif /*ANSI_CODES_H*/
