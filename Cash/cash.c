#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float dollars;
    do {
        dollars = get_float("Change owed in dollars: ");
    } while (dollars <= 0 );

    int coins = 0;
    // converts from float to int to improve precision.
    int cents = round(dollars * 100);

    while (cents > 0) {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else {
            cents -= 1;
            coins++;
        }
    }

    // total coins needed to give change
    printf("you are owed %i coins \n", coins);
}