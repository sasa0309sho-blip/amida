#include "header.h"
int *make_ans(int number) {
  int *ans;
  ans = malloc(sizeof(int) * number);
  srand(time(NULL));
  int i = 1;
  for (int j = 0; j < number; j++) {
    ans[j] = 0;
  }
  while (i != number + 1) {
    int tmp = rand() % number;
    if (ans[tmp] == 0) {
      ans[tmp] = i;
      i++;
    }
  }
  return ans;
}
