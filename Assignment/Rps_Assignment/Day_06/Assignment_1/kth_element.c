// rotate every kth element.
#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateKthElements(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = (i + k - 1 < n) ? (i + k - 1) : (n - 1);
        reverseArray(arr, start, end);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Original array: ");
    printArray(arr, n);

    rotateKthElements(arr, n, k);

    printf("Array after rotating every %dth element: ", k);
    printArray(arr, n);

    return 0;
}