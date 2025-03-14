#include <stdio.h>

int main(void)
{
    // Do the following ten times:
    for (int i = 0; i < 10; i++)
    {
        // Print dots
        // i starts at 0 and increments by 1 each time
        // So when i = 0, 0 dots are printed
        // When i = 1, 1 dot is printed
        // When i = 2, 2 dots are printed and so on
        for (int j = 0; j < i; j++)
        {
            printf(".");
        }

        // Print character
        printf("P");

        // Print more dots
        // When i = 0, 10 - 0 dots are printed
        // When i = 1, 10 - 1 dots are printed
        // When i = 2, 10 - 2 dots are printed and so on
        for (int j = 0; j < 10 - i; j++)
        {
            printf(".");
        }

        printf("\n");
    }

    printf("\n");
}
