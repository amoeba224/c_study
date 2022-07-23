#include <stdio.h>
#include <string.h>

int main(void) {

  char input[1000] = {0};

  fgets(input, sizeof(input), stdin);

  for (int i = strlen(input); i >= 0; i--) {
    printf("%c", input[i]);
  }

  return 0;
}
