#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include <inttypes.h>
 
int _printf(const char *format, ...);
int _putchar(char c); 
int print_num(int len, va_list arg);
int print(int64_t a);
int count(int n);
int pc(va_list arg);
int ps(int len, va_list arg);

#endif
