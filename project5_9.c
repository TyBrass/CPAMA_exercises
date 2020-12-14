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


    // Think, what is the way to do this??

    if (firstY > secondY)
    {

    }
    else if (firstY < secondY)
    {

    }
    else
    {
        if (firstM > secondM)
        {

        }
        else if (firstM < secondM)
        {

        }
        else
        {
            if (firstD > secondD)
            {
                
            }
            else if (firstD < secondD)
            {

            }
            else
            {

            }
        }
    }
    return 0;
}
