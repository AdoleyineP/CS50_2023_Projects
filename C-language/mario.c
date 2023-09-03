#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    /**gets input from user and checks if input is between 1 to 8.
     * If so stop and assign input to n else continue asking.
     */
    do
    {
        n = get_int("Height: ");
    }
    while (!(n >= 1 && n <= 8));

    for (int i = 1; i <= n; i++)
    {
        // prints the spaces in front of the #
        for (int k = 0; k < (n - i); k++)
        {
            printf(" ");
        }
        // prints the # symbol
        for (int j = 0; j < i; j++)
        {

            printf("#");
        }

        printf("\n");
    }
}