#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
char *_strpbrk(char *s, char *accept);
void print_diagsums(int *a, int size);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);

#endif
