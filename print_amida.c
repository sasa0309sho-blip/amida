#include "header.h"
void print_amida(char **Str, char **name, int *ans, int number) {
  for (int i = 0; i < 2 * number + 1; i++) {
    if (i % 2 == 0) {
      printf(" ");
    } else {
      printf("%c", name[(i - 1) / 2][0]);
    }
  }
  printf("\n");

  for (int i = 0; i < 4 * number; i++) {
    for (int j = 0; j < 2 * number + 1; j++) {
      printf("%c", Str[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 1 + 2 * number; i++) {
    if (i % 2 == 0) {
      printf(" ");
    } else {
      printf("%d", ans[(i - 1) / 2]);
    }
  }
  printf("\n");
}
