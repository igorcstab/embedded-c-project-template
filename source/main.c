#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "project-version.h"

int main()
{
    printf("%s\nVersion: %s\n", getProjectName(), getProjectVersion());
}

/*
-g add symbols for debugging
-std=gnu11
-OX optimization level
-Wall compiler warnings
-Wextra extra warnings to make code more precise
-ggdb ads debug info to output file
*/