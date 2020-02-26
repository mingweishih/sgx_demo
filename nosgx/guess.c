#include <string.h>

char *secret = "PASSWORD";

int guess_secret(char *guess)
{
    if (strcmp(guess, secret) == 0)
    {
        return 0;
    }
    return 1;
}

