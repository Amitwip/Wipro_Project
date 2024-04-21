#include <stdio.h>

int main()
{
    int age;
    printf("enter the age f candidate :");
    scanf("%d", &age);

    // A person under 18 is a minor, between 18 and 65 is an adult, and above 65 is a senior
    if (age < 18)
    {
        printf("Category: Minor\n Not eligible to vote");
    }
    else
    {
        // age is below 65 and above 18
        if (age > 18 && age < 65)
        {

            printf("Category: Adult\n Eligible to vote");
        }
        else
            printf("Category : Senior\n Eligible to vote");
    }
    return 0;
}