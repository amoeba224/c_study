#include <stdio.h>
#include <string.h>

int main(void) {

  char input[1000] = {0};
  char output[1000] = {0};

  fgets(input, sizeof(input), stdin);

  // for(int i=0; i<=1000; i++){
  //  scanf("%c", &input[i]);
  //}

  for (int i = 0; i <= strlen(input); i++) {
    if (input[i] >= 65 && input[i] <= 90) {
      output[i] = input[i] + 32; //대문자
    } else if (input[i] >= 97 && input[i] <= 122) {
      output[i] = input[i] - 32; //소문자
    } else {
      output[i] = input[i]; //그대로 유지
    }
  }

  for (int i = 0; i <= 1000; i++) {
    printf("%c", output[i]);
  }

  return 0;
}
