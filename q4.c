#include <stdio.h>
#include <cs50.h>

int main()
{
    int unit = get_int("Enter the number of units consumed: ");
    int x = unit - 100;
    int y = x * 6;
    int v = unit - 200;
    int z = v * 8;
    int bill = 0;

    if (unit <= 100)
    {
       bill = unit * 5;
    }
    else if (unit > 100 && unit <= 200)
    {

       bill = 500 + y;
       if (bill > 1000)
       {
          bill += (0.1 * bill);
       }
    }
    else if (unit > 200)
    {
        bill = 1100 + z;
        bill += (0.1 * bill);

    }

    printf("Bill: %d\n", bill);
    return 0;
}
