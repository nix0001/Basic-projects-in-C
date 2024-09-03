#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Generate Random numbers
    srand(time(NULL));
    int value = rand() % 100 + 1;
    // User input
    int guess = get_int("Pick between 1 to 100 for your guess: ");
    {
    printf("%i\n", guess);
    }
    // Loop until the user finds the correct answer
    while (guess != value)
    {
    // Guessing mechanics
        if (guess < value)
        {
            printf("Your guess is too low. Try again\n");
        }
        else if(guess > value)
        {
            printf("Your guess is too high. Try again\n");
        }
        guess = get_int("Pick between 1 to 100 for your guess: ");
    }
    printf("Congratulations! You guessed the correct number. \n");
}
