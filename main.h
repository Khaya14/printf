#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int main(void);
int _printf(const char *format, ...);
int _putchar(char c);
int prt_c(char val);
int prt_strg(char *str);
int prt_strcon(const char *str);
int prt_per(void);
int format_declarator(char format_dec, va_list list);
int prt_int(int n);
int prt_string(va_list str);


#endif
