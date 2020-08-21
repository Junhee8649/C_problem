#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int money;

    scanf("%d", &money);

    while (money >= 1200)
    {
        printf("%d", money - 1200);
        money -= 1200;
    }

    return 0;
}