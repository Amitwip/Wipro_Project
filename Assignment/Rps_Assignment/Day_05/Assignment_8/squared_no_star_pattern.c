// the logic to for incrementing Squared Number-Star Pattern.

#include <stdio.h>
int main()
{

    int num_row, square = 1;
    printf(" Enter number of row between 2 to 10 : ");
    scanf("%d", &num_row);

    if (num_row < 2 || num_row > 10)
    {
        printf("Invalid Input . \n");
        return 1;
    }
    for (int i = 1; i <= num_row; i++)
    {
        for (int j = 0; j < num_row; j++)
        {
            printf("%d", square++);
            if (j != num_row - 1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}