#include <cs50.h>
#include <stdio.h>

int main()
{
    int x = get_int("Enter a number: ");

    int sum = 0;
    int odd = 0;

    while (x > 0)
    {
        int y = x % 10;
        if (y % 2 != 0)
        {
            odd++;
        }
        sum += y;
        x /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Number of odd digits: %d\n", odd);
    return 0;
}
