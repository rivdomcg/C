#include <stdio.h>

int main(void)
{
    // Prompt the user for their name
    char name[30];
    printf("What's your name? ");
    scanf("%s", name);

    // Greet user
    printf("hello, %s\n", name);
}
