#include <stdio.h>
#include <stdlib.h>

int n;
int arr[100000];
int min = 1000000000;
int temp;
int idx1, idx2;

int twoLiquid(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) { // 버블 정렬 사용
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (min > abs(arr[i] + arr[j])) {
          min = abs(arr[i] + arr[j]);
          idx1 = arr[i];
          idx2 = arr[j];
        }
      }
    }
  }
  return 0;
}

int main(void) {
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  twoLiquid(arr, n);
  printf("%d %d", idx1, idx2);

  return 0;
}