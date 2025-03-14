#include <stdio.h>

int main(void)
{
    // Prompt the user for a stairs height
    int height;
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 1);

    // Do the following "height" times
    for (int i = 0; i < height; i++)
    {
        // If for example height = 3
        // When i = 0, print 3 - 0 - 1 = 2 empty spaces
        // When i = 1, print 3 - 1 - 1 = 1 empty space
        // When i = 2, print 3 - 2 - 1 = 0 empty spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print bricks
        // When i = 0, print 0 + 1 = 1 brick
        // When i = 1, print 1 + 1 = 2 bricks
        // When i = 2, print 2 + 1 = 3 bricks
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
