// Merge Strings
#include <stdio.h>
#include <string.h>

void mergeStrings(char *first, char *second, char *result)
{
    int i = 0, j = 0, k = 0;

    while (first[i] != '\0' || second[j] != '\0')
    {
        if (first[i] != '\0')
        {
            result[k++] = first[i++];
        }
        if (second[j] != '\0')
        {
            result[k++] = second[j++];
        }
    }
    result[k] = '\0';
}
int main()
{
    char first[100], second[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", first);
    printf("Enter the second string: ");
    scanf("%s", second);

    mergeStrings(first, second, result);

    printf("Merge string: %s\n", result);

    return 0;
}