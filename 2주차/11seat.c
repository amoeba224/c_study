#include <stdio.h>
#include <stdbool.h>

int r=0, c=0;
int arr[1010][1010];

int main(void) {

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  int k = 0;

  scanf("%d %d", &r, &c);
  scanf("%d", &k);
  
  int x=1;
  int y=1;
  int dir=0;

  for(int i=1; i<=r*c; i++){
    arr[x][y] = i;

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if(nx < 1 || nx  > r || ny < 1 || ny > c || arr[nx][ny]!=0){
      dir = (dir+1) % 4;}

    x += dx[dir];
    y += dy[dir];

  }

  for(int i=1; i <= r; i++){
    for(int j=1; j<=c; j++){
      if(arr[i][j]==k)
        printf("%d %d", i, j);
      }
    }

  return 0;
}
 

  
