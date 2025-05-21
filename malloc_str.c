#include "header.h"
void malloc_str(char ***Str, int a, int b) {
  *Str = malloc(sizeof(char *) * a);
  for (int i = 0; i < a; i++) {
    (*Str)[i] = malloc(sizeof(char) * (b + 1));
  }
}
