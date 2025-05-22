#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_num 20
#define point '#'
#define freq_point 10
void free_str(char **Str);
char *chomp(char *str);
void malloc_str(char ***Str, int a, int b);
char **make_amida(int number);
void print_amida(char **Str, char **name, int *ans, int number);
int trace_amida(char **Str, int j, int *ans, int number);
int *make_ans(int number);
void print_ans(char **name, int *ans, int number);
