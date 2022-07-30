#include <stdio.h>

int count = 0;
int last[100] = {
    0,
};

void inequal(int x, int n, int arr[], int check[], int temp[]) {

  if (x >= 2) {
    if (arr[x - 2] == '<') {
      if (temp[x - 2] > temp[x - 1])
        return;
    } else if (arr[x - 2] == '>') {
      if (temp[x - 2] < temp[x - 1])
        return;
    }
  }
  if (x == n + 1) {
    for (int i = 0; i <= n; i++) {
      last[i] = temp[i];
    }
    if (count == 0) {
      for (int i = 0; i <= n; i++) {
        printf("%d", temp[i]);
      }
    }
    //갯수 파악
    count++;
    return;
  }
  for (int i = 9; i >= 0; i--) {
    if (check[i] == 0) {
      temp[x] = i;
      check[i] = 1;

      inequal(x + 1, n, arr, check, temp);

      // temp[x] = 0;
      check[i] = 0;
    }
  }
}

int main() {
  int n;
  scanf("%d\n", &n);
  //기호 배열
  int arr[100];
  int temp[100];
  int check[100] = {
      0,
  };

  //기호 배열에 넣기
  for (int i = 0; i < n; i++) {
    scanf(" %c", &arr[i]);
  }

  //순서, 부호 갯수, 부호, 수 사용여부, 결과 값
  inequal(0, n, arr, check, temp);

  //테스트 출력
  printf("\n");
  for (int i = 0; i <= n; i++) {
    printf("%d", last[i]);
  }
  return 0;
}
