#include <stdio.h>
int main()
{
    int a, b, n;

   n=5;

    for (a = 0; a <= n; a++)
    {
        for (b = a; b <= n; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}