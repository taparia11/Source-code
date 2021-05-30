#include <stdio.h>
struct student
{
int regno;
char name[20];
int m1, m2, m3;
};
int main()
{
struct student s[5];
struct student *ptr;
ptr = &s[0];
int i;
for (i = 0; i < 5; i++)
{
printf("Enter details of Student #%d\n", i + 1);
printf("Enter Reg no. of student\n");
scanf("%d", &ptr->regno);
printf("Enter Name of student\n");
scanf("%s", ptr->name);
printf("Enter Marks of student\n");
scanf("%d %d %d", &ptr->m1, &ptr->m2, &ptr->m3);
ptr++;
}
ptr = &s[0];
for (i = 0; i < 5; i++)
{
printf("\n--------------------------------");
printf("\nDetails of Student #%d\n", i + 1);
printf("Reg no. of student is %d\n", ptr->regno);
printf("Name of student is %s\n", ptr->name);
printf("Marks of student are \n%d %d %d\n", ptr->m1, ptr->m2, ptr->m3);
ptr++;
}
return 0;
}