// CP:AMA Chapter 7 - Project 13
// Calculates the average word length for a sentence. Display the average word
// length to one decimal place.

#include <stdio.h>

int main(void)
{
    float n = 1.0f;
    float total = 0.0f;
    char c;

    printf("Enter a sentence: ");
    do {
        c = getchar();
        if(c == ' ') {
            n++;
        }
        else {
            total++;
        }
    } while (c != '\n');

    printf("Average word length: %.1f\n", total / n);

    return 0;
}