#include <stdarg.h>
#include <unistd.h>
#ifndef HEADER_FILE
#define HEADER_FILE
int _printf(const char *format, ...);
int _printc(char c);
int _prints(char *s);
int _printi(int n);
int _pow(int n, int p);
int _abs(int n);
int check_frmt(char c, va_list ptr);
#endif