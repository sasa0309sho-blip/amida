#include "header.h"
void free_str(char **Str, int len) {
  for (int i = 0; i < len; i++) {
    free(Str[i]);
  }
  free(Str);
}
