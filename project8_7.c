// CP: AMA - Chapter 8 - Project 7
// Reads a 5x5 array of integers then prints row sums and column sums.

#include <stdio.h>

int main(void)
{
    int matrix[5][5] = {0};     // Declare 5x5 matrix

    // Take input for matrix
    printf("Enter row 1: ");
    scanf("%d%d%d%d%d", &matrix[0][0], &matrix[0][1], &matrix[0][2], 
    &matrix[0][3], &matrix[0][4]);
    printf("Enter row 2: ");
    scanf("%d%d%d%d%d", &matrix[1][0], &matrix[1][1], &matrix[1][2], 
    &matrix[1][3], &matrix[1][4]);
    printf("Enter row 3: ");
    scanf("%d%d%d%d%d", &matrix[2][0], &matrix[2][1], &matrix[2][2], 
    &matrix[2][3], &matrix[2][4]);
    printf("Enter row 4: ");
    scanf("%d%d%d%d%d", &matrix[3][0], &matrix[3][1], &matrix[3][2], 
    &matrix[3][3], &matrix[3][4]);
    printf("Enter row 5: ");
    scanf("%d%d%d%d%d", &matrix[4][0], &matrix[4][1], &matrix[4][2], 
    &matrix[4][3], &matrix[4][4]);
    printf("\nRow totals: ");

    int toPrint;
    for(int i = 0; i < 5; i++) {
        toPrint = 0;
        for(int j = 0; j < 5; j++) {
            toPrint += matrix[i][j];
        }
        printf("%d ", toPrint);
    }
    printf("\nColumn totals: ");
    for(int i = 0; i < 5; i++) {
        toPrint = 0;
        for(int j = 0; j < 5; j++) {
            toPrint += matrix[j][i];
        }
        printf("%d ", toPrint);
    }
    printf("\n\n");

    return 0;
}
