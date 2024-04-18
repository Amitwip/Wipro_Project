// pattern of triangle star
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the number of row : \n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = row - 1; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}