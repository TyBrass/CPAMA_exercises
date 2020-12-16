// CP:AMA Chapter 6 - Project 6
// Prompts user to enter a number n, then prints all even squares between 1 
// and n.

#include <stdio.h>

int main(void)
{
    int input = 0;
    printf("Enter a number: ");
    scanf("%d", &input);

    for(int i = 0; i <= input; i++) {
        for(int j = 1; j <= i / 2; j++) {
            if (((j*j) == i) && (i % 2 == 0)) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
