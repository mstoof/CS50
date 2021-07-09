#include <cs50.h>
#include <stdio.h>


// function pyramid
void pyramid(int n);

int main(void) {

    // standard height
    int height = 0;

    do {
        height = get_int("What is the Height: ");

    }
    while (!(height >= 1 && height <= 8));

    pyramid(height);
}

void pyramid(int n) {
    for (int i = 0; i < n; i++)
    {
        // print empty spaces
        for (int k = n - i - 2; k >= 0; k--)
        {
            printf(" ");
        }
        for (int j=0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
