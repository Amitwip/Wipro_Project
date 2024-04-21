// partition
#include <stdio.h>

int findElement(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {

        int flag = 0;

        for (int j = 0; j < i; j++)
        {
            if (A[j] >= A[i])
            {
                flag = 1;
                break;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] <= A[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            return A[i];
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int element = findElement(A, n);
    printf("%d\n", element);

    return 0;
}