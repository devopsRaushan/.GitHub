/* Game - Guess the correct number
 * Guess your number between 1 to 100
 * If your guessed number is smaller than the number, then this will say enter the smallest number and vice-versa
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number, user_guesses, user_attempts = 1;
    srand(time(0));
    random_number = rand() % 100;
    printf("The random number is %2d\n", random_number);
    do
    {
        printf("Enter the Number to Guess between [1 to 100] only: \n");
        scanf("%d", &user_guesses);

        if (user_guesses < random_number)
        {
            printf("Random number is greater than your guess number\nEnter the Largest number\n");
        }

        else if (user_guesses > random_number)
        {
            printf("Random number is less than your guess number\nEnter the smallest number: \n");
        }

        else
        {
            printf("Woo-hoo you guessed right!\nGood job!\nYou guess the number is %d in %d attemptts.", random_number, user_attempts);
        }

        user_attempts++;

    } while (user_guesses != random_number);
    return 0;
}
