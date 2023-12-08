#include <stdio.h>
#include <string.h>
int main()
{
    char kata[] = "devCom";
    int n = strlen(kata);

    for (n - 1; n > 0; n--)
    {
        printf("%c", kata[n - 1]);
    }
    printf("\n");

    return 0;
}