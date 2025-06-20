#ifndef ANSI_CODES_H
#define ANSI_CODES_H

#define CLEAR_SCREEN	"\e[2J"
#define CLEAR_LINE	"\e[2K"
#define RESET 		"\e[0m"

#define FG_BLACK   	"\e[30m"
#define FG_RED   	"\e[31m"
#define FG_GREEN 	"\e[32m"
#define FG_YELLOW	"\e[33m"
#define FG_BLUE 	"\e[34m"
#define FG_MAGENTA 	"\e[35m"
#define FG_CYAN 	"\e[36m"
#define FG_WHITE 	"\e[37m"
#define FG_DEFAULT 	"\e[39m"

#define BG_BLACK   	"\e[40m"
#define BG_RED   	"\e[41m"
#define BG_GREEN 	"\e[42m"
#define BG_YELLOW	"\e[43m"
#define BG_BLUE 	"\e[44m"
#define BG_MAGENTA 	"\e[45m"
#define BG_CYAN 	"\e[46m"
#define BG_WHITE 	"\e[47m"
#define BG_DEFAULT 	"\e[49m"

#define BG_GRAY 	"\e[48;5;244m"
#define BG_BROWN	"\e[48;5;94m"
#define FG_OFFWHITE	"\e[38;5;253m"
#define FG_OFFBLACK	"\e[38;5;234m"

#endif /*ANSI_CODES_H*/
