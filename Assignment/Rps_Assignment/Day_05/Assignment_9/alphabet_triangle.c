// Write a c program to print alphabet triangle.

#include <stdio.h>
int main()
{

    int row, i, j;
    printf("Enter the number of row :");
    scanf("%d", &row);
    if (row < 1 || row > 26)
    {
        printf("INVALID");
    }
    else
    {

        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= row - i; j++)
            {
                printf("  ");
            }
            char c = 'A';
            for (j = 1; j <= i; j++)
            {
                if (j > 1)
                {
                    printf(" ");
                }
                printf("%c", c++);
                // printf(" ");
            }
            printf(" ");
            c -= 2;
            for (j = 1; j < i; j++)
            {
                printf("%c", c--);
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}