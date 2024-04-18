// Print series 1, 2, 4, 8, 16, 32, 64. given n = 64
#include <stdio.h>
int main()
{
    int n = 64, k = 1;
    while (k <= n)
    {
        printf("%d,", k);
        k = k * 2;
    }
    
}