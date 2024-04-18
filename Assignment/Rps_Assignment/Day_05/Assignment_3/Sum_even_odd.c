// print Sum of Even and  sum of odd values between 1 to 50
#include <stdio.h>
int main()
{
    int i, num, odd_sum = 0, even_sum = 0;
    printf("Enter the value:\n");
    scanf("%d", &num);
    if (num > 50)
    {
        printf("Invalid Input");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            if (i % 2 == 0)
                even_sum += i;
            else
            {
                odd_sum += i;
            }
        }
        printf("sum of all even number = %d\n", even_sum);
        printf("sum of all odd number = %d", odd_sum);
    }

    return 0;
}