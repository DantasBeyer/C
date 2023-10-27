#include <stdio.h>

int main(void)
{
    int zahl = 1, tmp = 0;

    while (zahl <= 10)
    {
        tmp = tmp + zahl;
        printf("%d+", zahl++);
    }
    printf("\b = %d\n", tmp);
    return 0;
}