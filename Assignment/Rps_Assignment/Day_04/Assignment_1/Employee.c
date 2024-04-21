#include <stdio.h>

int main()
{
    int SLno, id;
    char name[20], phone_no[10], address[20];
    char gender;
    float salary;

    printf("Enter SLNo, ID, Name, Gender, Salary, Phone Number, Address: ");
    scanf("%d %d %s %c %f %s %s", &SLno, &id, &name, &gender, &salary, phone_no, address);

    printf("==================================================\n");
    printf("                EMPLOYEE DETAILS\n");
    printf("==================================================\n");
    printf("SLNo\tID\tName\tGender\tSalary\tPhone Number\tAddress\n");
    printf("----\t---\t----\t------\t------\t------------\t-------\n");
    printf("%d\t%d\t%s\t%c\t%.2f\t%s\t%s\n", SLno, id, name, gender, salary, phone_no, address);

    return 0;
}