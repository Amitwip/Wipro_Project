// Given number to sum of prime number
#include <stdio.h>
#include <stdbool.h>

bool Prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int find_Pairs(int n)
{
    int count = 0;
    printf("Output:\n");
    for (int i = 2; i <= n / 2; i++)
    {
        if (Prime(i) && Prime(n - i))
        {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    return count;
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int ways = find_Pairs(num);

    if (ways == 0)
    {
        printf("NoofWays = -1\n");
    }
    else
    {
        printf("NoofWays = %d\n", ways);
    }

    return 0;
}