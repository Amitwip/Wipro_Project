// Print series 0,3,8,15,24,35,48,63,80,99 given n = 10
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n < 10; n++)
    {
        printf("%d,", n * n - 1);
    }
    printf("%d", n * n - 1);
    return 0;
}
