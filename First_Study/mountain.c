#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int height;

    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = height; j > 0; j--)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }

        if (i > 1)
        {
            for (int k = 1; k < i; k++)
                printf("*");
        }
        printf("\n");
    }

    return 0;
}