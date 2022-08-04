#include <stdio.h>

int n, k;
int arr[100000][100000];
int cnt = 0;
int min;

int NNTable(int n, int k) {

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      arr[i][j] = i * j;
    }
  }

  for (int a = 1; a <= n * n; a++) {
    for (int b = 1; b <= n; b++) {
      for (int c = 1; c <= n; c++) {
        if (a == arr[b][c]) {
          cnt++;
          min = arr[b][c];
        }
        if (cnt == k) {
          return min;
        }
      }
    }
  }
  return 0;
}

int main(void) {

  scanf("%d", &n);
  scanf("%d", &k);

  NNTable(n, k);

  printf("%d", min);

  return 0;
}