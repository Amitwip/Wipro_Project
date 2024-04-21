// Remove Characters
#include <stdio.h>
#include <string.h>

void removeCharacters(char *first, char *second)
{
    int hash[256] = {0};

    for (int i = 0; first[i]; i++)
    {
        hash[first[i]] = 1;
    }

    int index = 0;

    for (int i = 0; second[i]; i++)
    {
        if (!hash[second[i]])
        {
            second[index++] = second[i];
        }
    }
    second[index] = '\0';
}

int main()
{
    char first[100], second[100];

    printf("Enter the first string: ");
    scanf("%s", first);
    printf("Enter the second string: ");
    scanf("%s", second);

    removeCharacters(first, second);

    printf("Modified string: %s %s\n", first, second);

    return 0;
}