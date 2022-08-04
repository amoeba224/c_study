#include <stdio.h>

int n, q;
int arr[100000];
int brr[100000];
int cnt = 0;

int getResult(int key) {
  for (int i = 0; i < n; i++) {
    if (key == arr[i]) {
      cnt++;
    }
  }

  return 0;
}

int main(void) {

  scanf("%d %d", &n, &q);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int j = 0; j < q; j++) {
    scanf("%d", &brr[j]);
  }

  for (int k = 0; k < q; k++) {
    int idx = getResult(brr[k]);
    printf("%d\n", cnt);
    cnt = 0;
  }

  return 0;
}