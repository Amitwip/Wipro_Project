// Prime_digits
#include <stdio.h>
#include <stdbool.h>

bool Prime_digits(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int nthPrimeNumber(int n)
{
    int count = 0;
    int num = 2;
    while (count < n)
    {
        if (Prime_digits(num))
        {
            count++;
            if (count == n)
                return num;
        }
        num++;
    }
    return -1;
}

int main()
{
    int T, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        printf("Enter N for test case %d: ", i + 1);
        scanf("%d", &n);
        printf("Output %d: %d\n", i + 1, nthPrimeNumber(n));
    }

    return 0;
}