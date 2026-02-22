#include <cs50.h>
#include <stdio.h>

int main()
{
    int x = 0;
    while (x < 3)
    {
       x++;
       int pin = get_int("Enter the pin: ");
       if (pin == 5555)
       {
        printf("Access granted.\n");
        return 0;
       }
    }
    printf("Account locked.\n");
    return 0;
}
