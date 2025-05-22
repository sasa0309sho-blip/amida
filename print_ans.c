#include "header.h"
#include <string.h>
void print_ans(char **name, int *ans, int number) {
  for (int i = 0; i < number - 1; i++) {
    for (int j = 0; j < number - i - 1; j++) {
      if (ans[j] > ans[j + 1]) {
        int tmp = ans[j];
        ans[j] = ans[j + 1];
        ans[j + 1] = tmp;
        char *tmp_str = malloc(sizeof(char) * 256);
        strcpy(tmp_str, name[j]);
        strcpy(name[j], name[j + 1]);
        strcpy(name[j + 1], tmp_str);
        free(tmp_str);
      }
    }
  }
  printf("結果を表示しますか？y / n\n");
  char tmp;
  scanf(" %c", &tmp);
  if (tmp == 'n') {
    printf("ほんとに表示しないですか？y / n\n");
    scanf(" %c", &tmp);
    if (tmp == 'y') {
      return;
    }
  } else if (tmp != 'y') {
    printf("間違ってます！Game Over\n");
    return;
  }

  srand(time(NULL));
  int random = rand() % 10;
  if (random != 0) {
    for (int i = 0; i < number; i++) {
      printf("%d,%s\n", ans[i], name[i]);
    }
  } else {
    printf("ほんとに表示しちゃって良いの？y / n\n");
    scanf(" %c", &tmp);
    if (tmp == 'y') {
      for (int i = 0; i < number; i++) {
        printf("%d,%s\n", ans[i], name[i]);
      }
    } else {
      printf("表示しないよ\n");
    }
  }
  return;
}
