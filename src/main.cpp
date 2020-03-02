#include <stdio.h>

#include "utils.h"

int main()
{
    int a = 100, b = 99;
    printf("customized add %d + %d = %d", a, b, add(a, b));
    return 0;
}
