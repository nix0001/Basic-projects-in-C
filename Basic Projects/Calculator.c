#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Ask the user for what operations they are going to use
    int o = get_int("Choose the corresponding number\nAddition: 1\nSubtraction: 2\nMultiplication: 3\nDivision: 4\n");

    // Addition
    if (o == 1)
    {
        float x = get_float("Numbers: ");
        float y = get_float("Numbers: ");

        double z = (x + y);
        printf("%.2f\n", z);

    }
    // Subtraction
    if (o == 2)
    {
        float x = get_float("Numbers: ");
        float y = get_float("Numbers: ");

        double z = (x - y);
        printf("%.2f\n", z);
    }
    // Multiplication
    if (o == 3)
    {
        float x = get_float("Numbers: ");
        float y = get_float("Numbers: ");

        double z = (x * y);
        printf("%.2f\n", z);
    }
    // Division
    if (o == 4)
    {
        float x = get_float("Numbers: ");
        float y = get_float("Numbers: ");

        if (y == 0)
        {
            printf("Syntax Error, 0 is not allowed in the denominator\n");
        }
        double z = (x / y);
        printf("%.2f\n", z);
    }
    // Loop the program if the chosen operation is invalid
    else
    {
        string j = get_string("Inappropriate Operation. Choose again: ");
        printf("/n");
    }
}
