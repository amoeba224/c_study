#include <stdio.h>
#include <stdbool.h>

int n,r;
char result[10];
bool check[30];

void getResult(int x){
  if(x==r){
    for(int i=0; i<r; i++) printf("%c", result[i]);
    printf("\n");
    return;
  }
  
  for(int i=0; i<n; i++){
    char alpha='a'+i;
    
    if(!check[i]){
      result[x]= alpha;
      check[i]=true;
      
      getResult(x+1);
      
      result[x]=0;
      check[i]=false;
    }
  }
}

int main(){
  scanf("%d %d", &n, &r);
  
  getResult(0);
  
  return 0;
}