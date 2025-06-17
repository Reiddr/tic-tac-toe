#ifndef TERM_DRAW_H
#define TERM_DRAW_H

#include <stdio.h>
#include <ansi_codes.h>
#include <types.h>

char* td_putc(char c, char* fg, char* bg);
uint16 _s_len_get(char* s);

#endif /*TERM_DRAW_H*/
