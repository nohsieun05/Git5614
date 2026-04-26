#include <stdio.h>

int main(void)
{
    int i, j, isPrime;


    for (i = 1; i <= 100; i += 2)
    {
        printf("%d\n", i);
    }


    for (i = 2; i <= 100; i += 2)
    {
        printf("%d\n", i);
    }


    for (i = 2; i <= 100; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
