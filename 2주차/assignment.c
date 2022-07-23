#include <stdio.h>
#include <string.h>

int main(void) {

  char input[100000] = {0};
  fgets(input, sizeof(input), stdin);

  for (int i = 0; i < strlen(input); i++){
    if(input[i] != 32){
      printf("%c", input[i]);
    }
  }

  return 0;
}
