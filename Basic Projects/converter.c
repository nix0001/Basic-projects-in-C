#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask the user if what unit do they want to convert
    int converter = get_int("Celsiues to Fahrenheit: 1\nFahrenheit to Celsiues: 2\n");
    // Temperature converter
    if (converter == 1)
        {
            int c = get_int("Celsiues: ");
            int j = (c * 9/5 + 32);
            printf("%d°fahrenheit\n", j);
        }
    else if (converter == 2)
        {
            int f = get_int("Fahrenheit: ");
            int k = ((f - 32)*5/9);
            printf("%d°celsiues\n", k);
        }
        printf("\n");
}
