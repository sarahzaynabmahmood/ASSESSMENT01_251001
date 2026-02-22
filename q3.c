#include <cs50.h>
#include <stdio.h>

int main()
{
    int age = get_int("Enter your age: ");
    int type = get_int("If it is a weekday, enter 0. If not, enter 1: ");

    if (age < 10)
    {
        printf("Ticket price: 60\n");
    }
    else if (age > 9 && age < 26)
    {
        if (type == 1)
        {
            printf("Ticket price: 120\n");
        }
        else
        {
            printf("Ticket price: 100\n");
        }
    }
    else if (age > 25)
    {
       if (type == 1)
       {
        printf("Ticket price: 160\n");
       }
       else
       {
        printf("Ticket price: 140\n");
       }
    }
    return 0;
}
