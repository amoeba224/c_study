#include <stdio.h>

int n, m;
int h[1000000];
int brr[100000];
int cnt=1;
int max;

int cuttingTree(int h[]){
  int total = 0;
  int indi = 0;
  
  for(int i=0; i<n; i++){
    if(h[i]-max<0){
      indi = 0;
    } else {
      indi = h[i]-max;
      }
    total = total + indi;
  }

  if(total<m){
    max--;
    return cuttingTree(h);
  } else {
    printf("%d", max);
  }
  
  return 0;
}


int main(void) {
  
  scanf("%d %d", &n, &m);
  
  for(int i=0; i<n; i++){
    scanf("%d", &h[i]);
  }

  for(int i=0; i<n; i++){
    if(max<=h[i]){
      max = h[i];
    }
  }

  cuttingTree(h);


  return 0;
}