#include <stdio.h>

int n, k;
int num[30];

void getResult(int x) {
  if (k > 0) {
    for (int i = x; i <= x + n - k; i++) {
      num[i] = 1;
      if (x < k) {
        for (int j = 1; j <= k; j++) {
        }
        getResult(x + 1);
        x++;
      } else {
        for (int m = 1; m <= n; m++) {
          printf("%d", num[m]);
        }
      }
      printf("\n");
      num[i] = 0;
    }
  } else {
    for (int m = 1; m <= n; m++) {
      printf("%d", num[m]);
    }
  }
}

int main() {
  scanf("%d %d", &n, &k);

  for (int i = 0; i <= n; i++) {
    num[i] = 0;
  }

  getResult(1);

  return 0;
}