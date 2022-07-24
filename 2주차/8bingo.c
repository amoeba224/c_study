#include <stdio.h>

int main(void) {
  // 1부터 25 의 자연수를 한 칸에 하나씩 쓴다
  // 부르는 숫자를 차례로 지워나간다
  // 가로 세로 대각선 위의 다섯 수가 다 지워지면 선을 긋는다
  // 세 개 이상 그어지면 빙고
  // 철수가 쓴 수와 사회자가 부르는 순서가 있으면 몇번째 수에 빙고를 외치게 되나?

  int chulsoo[5][5] = {0,};
  int mc[5][5] = {0,};
  

  //철수가 쓴 것
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      scanf("%d ", &chulsoo[i][j]);
    }
  }
  
  //사회자
  for(int i=0; i<5; i++){
  for(int j=0; j<5; j++){
    scanf("%d", &mc[i][j]);
    }
  }

  int order=0;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      int a;
      a=mc[i][j];
      order++;

      for(int k=0; k<5; k++){
        for(int l=0; l<5; l++){
          if(chulsoo[k][l]==a){
            chulsoo[k][l]=0;
          }    
        }
      }
      
      int bingo = 0;
      //가로줄
      for(int a=0; a<5; a++){
        int cnt=0;
        for(int b=0; b<5; b++){
          if(chulsoo[a][b]==0){
            cnt++;
          }
        }  
        
        if(cnt==5){
          bingo++;
        }  
      }

      //세로줄
      for(int a=0; a<5; a++){
        int cnt=0;
        for(int b=0; b<5; b++){
          if(chulsoo[b][a]==0){
            cnt++;
          }
        }
        if(cnt==5){
          bingo++;
        }
      }

      //좌상우하
      int cnt = 0;
      for(int a=0; a<5; a++){
        if(chulsoo[a][a]==0) cnt++;
        }
      if(cnt==5){
        bingo++;
      }

      //우상좌하
      cnt = 0;
      for(int a=0; a<5; a++){
        if(chulsoo[a][4-a]==0) cnt++;}
      if(cnt==5){
        bingo++;
      }

      if(bingo>=3){
        printf("%d\n", order);
        return 0;
      }
    }
  }
  return 0;
}

