#include <cs50.h>
#include <stdio.h>

int main()
{
    int track[7];

    for (int i = 0; i < 7; i++)
    {
        track[i] = get_int("Enter study hours of day %d: ", i + 1);
    }

    int sum = 0;
    int less = 0;

    for (int i = 0; i < 7; i++)
    {
        sum += track[i];
        if (track[i] < 2)
        {
            less++;
        }
    }
    float avg = sum / 7;

    printf("Total hours: %d\n", sum);
    printf("Average hours per day: %.1f\n", avg);
    printf("Number of days with less than two hours of studying: %d\n", less);
    return 0;
}
