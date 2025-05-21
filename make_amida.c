#include "header.h"
char **make_amida(int number) {
  char **amida;
  srand(time(NULL));
  malloc_str(&amida, 4 * number, 2 * number + 1);
  for (int i = 0; i < 4 * number; i++) {
    int is_prepoint = 0;
    for (int j = 0; j < 2 * number + 1; j++) {
      if (j % 2 == 1 || (i % 2 == 0 && j % 2 == 1)) {
        amida[i][j] = point;
      } else if (j != 0 && j != 2 * number) {
        int is_point = rand() % freq_point + 1;
        if (is_point == 1 && is_prepoint == 0) {
          amida[i][j] = point;
          is_prepoint = 1;
        } else {
          amida[i][j] = ' ';
          is_prepoint = 0;
        }
      } else {
        amida[i][0] = ' ';
      }
    }
  }
  return amida;
}
