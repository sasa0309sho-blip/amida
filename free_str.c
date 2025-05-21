#include "header.h"
void free_str(char **Str) {
  int i = 0;
  while (Str[i] != NULL) {
    free(Str[i]);
    i++;
  }
  free(Str);
}
