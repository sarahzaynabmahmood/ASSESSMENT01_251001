#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Enter battery percentage: ");
    int b = get_int("If the charger is connected, enter 1. If not, enter 0: ");

    if (a < 20)
    {
        if (b == 0)
        {
            printf("Connect charger immediately.\n");
        }
    }
    else if (a < 81)
    {
        printf("Battery level normal.\n");
    }
    else
    {
        if (b == 1)
        {
            printf("Unplug charger to save battery health.\n");
        }
    }
    return 0;
}
