#include <stdio.h>
#include <stdlib.h>
#include "eliuds_eggs.h"

int egg_count(int num)
{
    if (num < 0) num *= -1;
    int count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
            count++;
        num /= 2;
    }
    return count;
}
