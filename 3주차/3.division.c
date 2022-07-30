#include <stdio.h>

int n;
int num = 0;
int idx = 1;

void getResult(int x) {
  int j = x - 1;
  int k = 0;
  if (j > 0) {
    for (int i = 1; i <= x / 2; i++) {
      j = x - i;
      k = i;
      if (num == 0) {
        if (j >= k) {
          printf("%d+%d\n", j, k);
        } else {
          break;
        }
      } else {
        printf("%d+%d", j, k);
        for (int m = 1; m <= num; m++) {
          printf("+1");
        }
        printf("\n");
      }
    }
    num++;
    getResult(x - 1);
  }
  idx++;
}

int main() {
  scanf("%d", &n);
  getResult(n);
  printf("%d", idx);
  return 0;
}