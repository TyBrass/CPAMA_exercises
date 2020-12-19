// CP: AMA - Chapter 8 - Project 6
// Translate input message to BIFFspeak.
// ( A > 4, B > 8, E > 3, I > 1, O > 0, S > 5)
// Store the original message in an array of characters, then go through 
// translating and printing one-by-one.

#include <stdio.h>

int main(void)
{
    char c;         // Input character
    char str[20] = {0};   // Max of 20 characters in the string

    // getchar character by character in a do-while, stop when newline
    // store each char in an array (C doesn't have strings)
    int i = 0;      // Loop counter
    printf("Enter a message: ");
    do {
        c = getchar();
        str[i] = c;
        i++;
    } while (c != '\n' && i < 20);

    // Array is filled. Now, go through and translate and print
    printf("In BIFF-Speak: ");
    for (int j = 0; j < i - 1; j++) {
        if (str[j] == 'A') {
            str[j] = '4';
        }
        else if (str[j] == 'B') {
            str[j] = '8';
        }
        else if (str[j] == 'E') {
            str[j] = '3';
        }
        else if (str[j] == 'I') {
            str[j] = '1';
        }
        else if (str[j] == 'O') {
            str[j] = '0';
        }
        else if (str[j] == 'S') {
            str[j] = '5';
        }
        printf("%c", str[j]);
    }
    printf("!!!!!!!!!!!\n");

    return 0;
}
