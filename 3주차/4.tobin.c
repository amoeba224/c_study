#include <stdio.h>

int n, k;
int num[30];

void getResult(int x, int y) {
  if(x>=n){
    if(y == k) {
      for(int i=0; i<n; i++){
        printf("%d", num[i]);
      }printf("\n");
    }
    else
      return;
  } else { // x<n
    if (y>=k){
      for(int i=0; i<n; i++){
        printf("%d", num[i]);
      }printf("\n");
    }
    else { // y<n
      num[x] = 1;
      getResult(x+1, y+1);
      num[x] = 0;
      getResult(x+1, y);
    }
  }
}

int main() {
  scanf("%d %d", &n, &k);

  getResult(0, 0);

  return 0;
}
