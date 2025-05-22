#include "header.h"
int trace_amida(char **Str, int j, int *ans, int number) {
  int now_x = 2 * j + 1;
  int now_y = 0;
  char **amida;
  malloc_str(&amida, 4 * number, 2 * number + 1);
  for (int k = 0; k < 4 * number; k++) {
    strcpy(amida[k], Str[k]);
  }
  while (now_y < 4 * number) {
    if (amida[now_y][now_x - 1] == point) {
      now_x = now_x - 2;
      amida[now_y][now_x + 1] = ' ';
    } else if (amida[now_y][now_x + 1] == point) {
      now_x = now_x + 2;
      amida[now_y][now_x - 1] = ' ';
    } else {
      now_y++;
    }
  }
  // free_str(amida);
  return ans[(now_x - 1) / 2];
}
