#include <cs50.h>
#include <stdio.h>

int main()
{
    int user = get_int("If you are an admin, enter 1. If you are a teacher, enter 2. If you are a student, enter 3: ");
    int pass = get_int("Enter the password: ");

    if (pass == 1234 && user == 1)
    {
        printf("Welcome Admin Panel\n");
    }
    else if (pass == 2222 && user == 2)
    {
        printf("Welcome Teacher Panel\n");
    }
    else if (pass == 3333 && user == 3)
    {
        printf("Welcome Student Panel\n");
    }
    else
    {
        printf("Invalid password.\n");
    }

    return 0;
}
