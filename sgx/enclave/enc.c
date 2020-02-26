// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#include <stdio.h>
#include <string.h>

#include "demo_t.h"

char *secret = "PASSWORD";

int enclave_guess(char *guess)
{
    if (strcmp(guess, secret) == 0)
    {
        return 0;
    }
    return 1;
}
