#include <cs50.h>
#include <stdio.h>

int main()
{
    int seats[40];
    int booked = 0;
    int empty = 0;

    for (int i = 0; i < 40; i++)
    {
        seats[i] = get_int("If seat %d is booked, enter 1. If not, enter 0: ", i + 1);
        if (seats[i] == 1)
        {
            booked++;
        }
        else
        {
            empty++;
        }
    }
    printf("Number of booked seats: %d\n", booked);
    printf("Number of empty seats: %d\n", empty);

    return 0;
}
