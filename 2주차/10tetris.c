#include <stdbool.h>
#include <stdio.h>

int r, c, score, num, zero;
int arr[50][50];
int x, y;

int main(void) {
  //판의 가로세로 길이
  scanf("%d %d", &c, &r);

  //내용 입력받기
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  y=0;
  score=0;

  for(int j=1; j<=c; j++){
    zero=r;
    for(int i =1; i<=r; i++){
      if(arr[i][j] == 1){
        zero = i-1;
        break;
      }
    }
      
    if(zero<4){
      continue;
    }

    for(int i=0; i<4; i++){
      arr[zero - i][j] = 1; //
    }

    //한 행의 원소에서 값이 1인 것의 숫자 세기
    num = 0;
    for (int m = 1; m <= r; m++) {
      int cnt = 0;
      for (int n = 1; n <= c; n++) {
        if (arr[m][n] == 1) {
          cnt++; //행의 1 개수
        }
      }
      // 1인 원소의 값이 가로 길이와 같으면 num++ (행의 개수)
      if (cnt == c){
        num++; //한 행이 모두 1인 개수
      }
    }

    if (score < num) {
      score = num;
      y = j;
    }

  // 임의로 넣었던 1 빼주기
    for(int i=0; i<4; i++){
      arr[zero-i][j] = 0; //
    }
  }

  printf("%d %d", y, score);
  return 0;

}
