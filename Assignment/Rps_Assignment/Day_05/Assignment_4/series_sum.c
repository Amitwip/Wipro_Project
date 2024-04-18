//Find out the sum of series 3 + 33 + 333 + 3333 + 33333 + 333333
#include <stdio.h>
    int
    main()
{
    int sum = 0;
    int term = 3;
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += term;
        term = term * 10 + 3;
    }
    printf("sum of the series: %d\n", sum);
    return 0;
}