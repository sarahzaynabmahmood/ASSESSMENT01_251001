#include <stdio.h>
#include <cs50.h>

int main()
{
    int a = get_int("Enter number of classes attended: ");
    int b = get_int("Total number of classes: ");
    float percent = (float)a / b * 100;
    float c = (0.75 * b);
    float d = c - a;

    if (percent >= 75)
    {
        printf("Eligible for sitting the exam.\n");
    }
    else
    {
        printf("Not eligible for the exam. %.0f more classes were needed to reach required percentage.\n", d);
    }
    return 0;
}

