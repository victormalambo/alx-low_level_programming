#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strpbrk(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *haystack, char *needle);
void Print_chessBoard(char (*a)[8]);
void print_diagSums(int *a, int size);
void set_String(char **s, char *to);
#endif
