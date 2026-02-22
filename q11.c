#include <stdio.h>
#include <cs50.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}
