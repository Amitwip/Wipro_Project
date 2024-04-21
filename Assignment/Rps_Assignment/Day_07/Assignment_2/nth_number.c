// nth number of sequence by only prime
#include <stdio.h>

int countDigits(long long num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

long long nthNumber(int n)
{
    int digits = 1;
    int total_Numbers = 4;
    while (n > total_Numbers)
    {
        n -= total_Numbers;
        digits++;
        total_Numbers *= 4;
    }

    long long number = 0;
    for (int i = 0; i < digits; i++)
    {
        number = number * 10 + ((n - 1) / (total_Numbers / 4) == 0 ? 1 : (n - 1) / (total_Numbers / 4) == 1 ? 4
                                                                     : (n - 1) / (total_Numbers / 4) == 2   ? 6
                                                                                                            : 9);
        n = (n - 1) % (total_Numbers / 4) + 1;
        total_Numbers /= 4;
    }

    return number;
}

int main()
{
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int n;
        printf("Enter N for test case %d: ", i + 1);
        scanf("%d", &n);

        printf("Output for test case %d: %lld\n", i + 1, nthNumber(n));
    }

    return 0;
}