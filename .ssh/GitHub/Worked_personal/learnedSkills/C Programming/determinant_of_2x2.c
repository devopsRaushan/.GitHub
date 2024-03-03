/* Finding the Determinant of a 2 x 2 matrix
 * Enter the elements of your 2x2 matrix and get the determinant of your given matrix
 */
#include <stdio.h>
int main()
{
    int matrix[2][2];
    // taking the elements of a 2x2 matrix by user
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    // printing the user given elements of a 2x2 matrix
    printf("Printing the elements of the matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // finding the determinant of the 2 x 2 matrix
    int determinant = ((matrix[0][0]) * (matrix[1][1])) - ((matrix[1][0]) * (matrix[0][1]));
    printf("\nThe determinant is: %d", determinant);
    return 0;
}
