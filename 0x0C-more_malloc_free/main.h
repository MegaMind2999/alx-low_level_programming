#ifndef MAIN_H
#define MAIN_H

/*#include <stdio.h>*/
#include <stdlib.h>

void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
char *iterate_zeroes(char *str);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int find_len(char *str);
char *create_xarray(int size);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

#endif
