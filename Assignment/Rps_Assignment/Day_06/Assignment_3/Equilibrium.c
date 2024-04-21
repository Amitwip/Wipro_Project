// Equilibrium position
#include <stdio.h>
int Equilibrium(int arr[], int n)
{
    int Sum_before = 0;
    int Sum_after = 0;

    for (int i = 0; i < n; i++)
    {
        Sum_before += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        Sum_before -= arr[i];

        if (Sum_after == Sum_before)
        {
            return i;
        }

        Sum_after += arr[i];
    }

    return -1;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int equilibrium_Index = Equilibrium(arr, n);

    printf("Equilibrium index: %d\n", equilibrium_Index);

    return 0;
}