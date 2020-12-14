// CPAMA Chapter 5 - Project 9
// Prompts the user to enter two dates and then indicates which comes earlier 
// on the calendar.

#include <stdio.h>

int main(void)
{
    int firstM;
    int firstD;
    int firstY;
    int secondM;
    int secondD;
    int secondY;

    printf("Enter the first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &firstM, &firstD, &firstY);
    printf("Enter the second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &secondM, &secondD, &secondY);

    // if first date is later than second date
    if (firstY > secondY ||
        (firstY == secondY && firstM > secondM) ||
        (firstY == secondY && firstM == secondM && firstD > secondD) )
    {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", secondM, secondD, 
        secondY, firstM, firstD, firstY);
    }
    else
    {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", firstM, firstD, 
        firstY, secondM, secondD, secondY);
    }
    
    return 0;
}
