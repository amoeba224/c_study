#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  //  char input[1000] = {0};
  //  bool result = true;

  //  fgets(input, sizeof(input), stdin);

  //  for (int i=0; i< strlen(input)/2; i++){
  //    if(input[i]!=input[strlen(input)-1-i]){
  //      result=false;
  //    }
  //  }

  //  if(result){
  //    printf("YES");
  //  }
  //  else printf("NO");

  //  return 0;

  char str[1000];
  bool result = true;

  scanf("%s", str);

  for (int i = 0; i < strlen(str) / 2; i++) {
    if (str[i] != str[strlen(str) - 1 - i])
      result = false;
  }

  if (result)
    printf("YES");
  else
    printf("NO");

  return 0;
}
