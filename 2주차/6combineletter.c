#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char A[1000] = {0};
  char B[1000] = {0};
  fgets(A, sizeof(A), stdin);
  fgets(B, sizeof(B), stdin);

  int cnt=0;
  for(int i=0; i<strlen(A); i++){
    for(int j=0; j<strlen(B); j++){
      if(A[i+j] == B[j]){
        cnt++;
      } else break;
    }
  }

  if(cnt>=strlen(B)){
    printf("YES");
  }
  else printf("NO");

  return 0;
}

