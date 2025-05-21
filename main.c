#include "header.h"
#include <libc.h>
#include <stdio.h>

/*__attribute__((destructor)) static void destructor() {
  system("leaks -q amida");
}*/
int main(void) {
  printf("名前を入力してください\n");
  char **name;
  malloc_str(&name, MAX_num, 256);
  char *tmp;
  tmp = malloc(sizeof(char) * 256);
  int i = 0;
  while (fgets(tmp, 256, stdin) != NULL) {
    chomp(tmp);
    strcpy(name[i], tmp);
    i++;
  }

  char **amida = make_amida(i);
  int *ans = make_ans(i);
  print_amida(amida, name, ans, i);
  free(tmp);
  free_str(name);
  free_str(amida);
  free(ans);
  return 0;
}
