#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char input[1000] = {0};
  fgets(input, sizeof(input), stdin);

  int cnt = 0;
  for (int i = 0; i < strlen(input); i++) {
    if (input[i] == input[i + 1]) {
      cnt++;
    } else {
      if (cnt > 0) {
        printf("%d%c", cnt + 1, input[i - 1]);
      } else
        printf("%c", input[i]);
      cnt = 0;
    }
  }

  return 0;
}
