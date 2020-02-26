#include <stdio.h>

int guess_secret(char *);

int main()
{
  char guess[8];
  int ret = 1;
  while (1) {
    printf("Please guess (8 byte): ");
    scanf("%8s", &guess);
    ret = guess_secret(guess);
    if (ret == 0) {
      printf("Succeed.\n");
      break;
    }
    printf("Try again.\n");
  }
  return 0;
}
