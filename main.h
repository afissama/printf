#include <stdarg.h>
#include <unistd.h>
#ifndef HEADER_FILE
#define HEADER_FILE
int _printf(const char *format, ...);
int _printc(char c);
int _prints(char *s);
int _printi(long n);
int _printb(long n);
int _strlen(char *s);
void rev_string(char *s);
int _pow(int n, int p);
int _abs(int n);
int check_frmt(char c, va_list ptr);
#endif
