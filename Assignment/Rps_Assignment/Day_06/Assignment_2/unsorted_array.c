// Given an unsorted array a of size N of non-negative integers,
// find a continuous sub-array which adds to a given number sum.
#include <stdio.h>
int find_Array_Sum(int arr[], int n, int sum, int *start, int *end)
{

    for (int i = 0; i < n; i++)
    {
        int current_Sum = arr[i];

        if (current_Sum == sum)
        {
            *start = i;
            *end = i;
            return 1;
        }
        else
        {

            for (int j = i + 1; j < n; j++)
            {
                current_Sum += arr[j];

                if (current_Sum == sum)
                {
                    *start = i;
                    *end = j;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum;
    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    int start, end;
    if (find_Array_Sum(arr, n, sum, &start, &end))
    {
        printf("Sum found between indexes %d and %d\n", start, end);
    }
    else
    {
        printf("No subarray found\n");
    }

    return 0;
}