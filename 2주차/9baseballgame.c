#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n=0;
  int info[100][3];
  int result=0;

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d %d %d", &info[i][0], &info[i][1], &info[i][2]);
  }

  for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
      for(int k=1; k<=9; k++){
        if(i!=j && j!=k && i!=k){
          
          bool flag = false;
          for(int p=0; p<n; p++){

            int first = info[p][0]/100;
            int second = (info[p][0]/10)%10;
            int third = info[p][0]%10;

            int s=0, b=0;

            if(first == i) s++;
            if(second == j) s++;
            if(third == k) s++;

            if(second == i || third == i) b++;
            if(first == j || third == j) b++;
            if(first == k || second == k) b++;

            if(info[p][1]!=s || info[p][2]!=b) flag = true;
          }
          if(!flag) result++;
        }
      }
    }
  }
  printf("%d\n", result);
  
  return 0;
}
 

  
