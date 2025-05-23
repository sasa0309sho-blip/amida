#include "header.h"
#include <libc.h>
#include <stdio.h>

int main(void) {
  printf("名前を入力してください\n");
  char **name;
  malloc_str(&name, MAX_num, 256);
  char *tmp;
  tmp = malloc(sizeof(char) * 256);
  int i = 0;
  /*while (fgets(tmp, 256, stdin) != NULL) {
    chomp(tmp);
    strcpy(name[i], tmp);
    i++;
  }*/
  while (1) {
    fgets(tmp, 256, stdin);
    if (strcmp(tmp, "\n") == 0)
      break; // 空行なら終了
    chomp(tmp);
    strcpy(name[i], tmp);
    i++;
  }
  char **amida = make_amida(i);
  int *ans = make_ans(i);
  print_amida(amida, name, ans, i);
  int *trace_ans = malloc(sizeof(int) * i);
  for (int j = 0; j < i; j++) {
    trace_ans[j] = trace_amida(amida, j, ans, i);
  }
  print_ans(name, trace_ans, i);
  free(tmp);
  free_str(name, MAX_num);
  free_str(amida, 4 * i);
  free(trace_ans);
  free(ans);
  return 0;
}
