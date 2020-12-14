// CP:AMA Chapter 6 - Project 1
// Finds the largest in a series of numbers entered by the user. The program 
// prompts the user to enter numbers one at a time, displaying the largest
// thus far upon the entering of a 0 or negative.

#include <stdio.h>

int main(void)
{
    float currentLargest = 1.0f;        // initialize the variable to 1.0
    float currentInput = 0.0001f;         // initialize current input to 0.0001f

    while (currentInput > 0) {        // break when user enters 0 or negative
        printf("Enter a number: ");     // prompt user for input
        scanf("%f", &currentInput);     // take input, store in currentInput
        if (currentInput > currentLargest) {    // if input is larger than currentLargest
            currentLargest = currentInput;      // set currentLargest to currentInput
        }
    }

    // print largest number entered
    printf("\nThe largest number entered was %f\n", currentLargest); 

    return 0;
}