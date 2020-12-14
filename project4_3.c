// CP:AMA Chapter 4 - Project 3
// Reworked version of project4_2 that takes the input's three digits
// individually.

#include <stdio.h>

int main(void)
{
    int first;
    int second;
    int third;

    printf("Enter a three-digit number");
    printf("First digit: ");
    scanf("%d", &first);
    printf("Second digit: ");
    scanf("%d", &second);
    printf("Third digit: ");
    scanf("%d", &third);
    printf("The reversal is: %d%d%d\n", third, second, first);
    
    return 0;
}
