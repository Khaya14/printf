#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int main(void);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_s(va_list val);
int _strlen(char *str);
int _strlencon(const char *str);
int printf_per(void);
int prt_int(va_list input);
int prt_dec(va_list input);

#endif
