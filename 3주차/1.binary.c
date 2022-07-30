#include <stdio.h>

int result[1000];

int calculator(int count) {
  int i;
  for (i = 0;; i++) {
    result[i] = count % 2;
    count = count / 2;
    if (count == 0)
      break;
  }
  return i;
}

int main() {
  int num, cnt, i;
  scanf("%d", &num);
  cnt = calculator(num);

  for (i = cnt; i >= 0; i--) {
    printf("%d", result[i]);
  }
  return 0;
}