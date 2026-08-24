#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name)
{
    if (name == NULL)
    {
        name = "you";
    }

    snprintf(buffer, BUFFER_SIZE, "One for %s, one for me.", name);
}