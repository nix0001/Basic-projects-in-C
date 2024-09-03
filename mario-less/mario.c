#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // Prompt the user for pyramid's height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // Pyramid's Height
    for (int i = 0; i < n; i++)
    {
        // Pyramid Dots for Row
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        // Pyramid's Row
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

