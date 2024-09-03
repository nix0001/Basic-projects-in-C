#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Make the user choose between Simple Interest and Compound Interest Calculator
    int c = get_int("Simple Interest: 1\nCompound Interest: 2\n");

    if (c == 1)
    {
        // User input for Principal
        int p = get_int("Principal: ");
        // Rate
        float R = get_float("Rate: ");
        float r = (R / 100);
        // Time
        int t = get_int("Time: ");
        // Number of times interest is compounded per year
        float s = (p * r * t);
        printf("Simple Interest: %.2f\n", s);
    }

    // Compound Interest Calculator

    else if (c == 2)
    {
        // User input for Principal
        int p = get_int("Principal: ");
        // Rate
        float R = get_float("Rate: ");
        double r = (R / 100);
        // Number of times interest is compounded per year
        int n = get_int("Number of times interest is compounded per year: ");
        // Time
        double t = get_int("Time: ");

        // Compound Interest
        double ci = p * pow((1 + r / n), (n * t));

        printf("Compound Interest: %.2f\n", ci);
    }
}
