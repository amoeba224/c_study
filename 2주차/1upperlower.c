#include <stdio.h>
#include <string.h>

int main(void) {

  char input[1000] = {0};

  fgets(input, sizeof(input), stdin);

  for (int i = 0; i <= strlen(input); i++) {https://github.com/amoeba224/c_study/blob/main/2%EC%A3%BC%EC%B0%A8/upperlower.c
    if (input[i] >= 65 && input[i] <= 90) {
      input[i] = input[i] + 32; //대문자
    } else if (input[i] >= 97 && input[i] <= 122) {
      input[i] = input[i] - 32; //소문자
    } else {
      input[i] = input[i]; //그대로 유지
    }
  }

  for (int i = 0; i <= 1000; i++) {
    printf("%c", input[i]);
  }

  return 0;
}
