#include <stdio.h>

int main(void)
{
    // Prompt the user for some amount of change owed
    int change;
    do
    {
        printf("Change owed: ");
        scanf("%i", &change);
    }
    while (change < 0);

    // Keep track of change to return
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    // Calculate change
    while (change >= 25)
    {
        quarters++;
        change = change - 25;
    }

    while (change >= 10)
    {
        dimes++;
        change = change - 10;
    }

    while (change >= 5)
    {
        nickels++;
        change = change - 5;
    }

    while (change >= 1)
    {
        pennies++;
        change = change - 1;
    }

    printf("Your change:\n");
    printf("%i quarters\n", quarters);
    printf("%i dimes\n", dimes);
    printf("%i nickels\n", nickels);
    printf("%i pennies\n", pennies);
}
