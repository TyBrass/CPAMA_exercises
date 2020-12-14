// CPAMA Chapter 4 - Project 1
// Asks the user to enter a two-digit number, then prints the number with its 
// digits reversed, making use of the arithmetic operators. It doesn't 
// check for proper input.

#include <stdio.h>

int main(void)
{
    int input;

    printf("Enter a two-digit number: ");
    scanf("%d", &input);
    printf("The reversal is: %d%d\n", input % 10, input / 10);
    
    return 0;
}
