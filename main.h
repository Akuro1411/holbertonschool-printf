#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int l;
va_list ptr;
void pd(void);
void pi(void);
void print(int a);
void pc(void);
void ps(void);
#endif
