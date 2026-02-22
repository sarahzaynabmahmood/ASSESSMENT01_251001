#include <cs50.h>
#include <stdio.h>

int main()
{
    float sum = 0;
    int x = 1;

    while (x != 0)
    {
        sum += get_float("Enter price of next product: ");
        x = get_int("If you want to continue shopping, enter 1. If not, enter 0: ");
    }

    if (sum > 2000)
    {
        sum -= 0.15 * sum;
    }
    else
    {
        sum -= 0.05 * sum;
    }

    printf("Total: %.2f\n", sum);
    return 0;
}
