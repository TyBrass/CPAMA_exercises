// CP:AMA Chapter 5 - Project 10
// Uses a switch statement to convert a numerical grade into a letter grade.

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    grade /= 10; // Gets first digit of grade.
    switch (grade) {
        case 9: printf("Letter grade: A\n");
        break;
        case  8: printf("Letter grade: B\n");
        break;
        case 7: printf("Letter grade: C\n");
        break;
        case 6: printf("Letter grade: D\n");
        break;
        default: printf("Letter grade: F\n");
    }
}