#ifndef TERM_DRAW_H
#define TERM_DRAW_H

#include <stdio.h>
#include <ansi_codes.h>
#include <types.h>

char* td_putc(char c, char* fg, char* bg);

int td_clear_screen(void);

int td_clear_line(void);

#endif /*TERM_DRAW_H*/
