#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
void free_grid(int **grid, int height);
int _putchar(char c);

#endif
