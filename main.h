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
int prt_c(va_list val);
int prt_str(char *str);
int prt_strcon(const char *str);
int prt_per(void);
int format_declarator(char format_dec, va_list ptr)

#endif
