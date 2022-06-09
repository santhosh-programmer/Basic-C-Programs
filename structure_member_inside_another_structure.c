
// C PROGRAM TO IMPLEMENT NESTED STRUCTURE

#include<stdio.h>
struct student
{
    int rollno;
};
struct class
{
    struct student a;
    char name[20];
}var;
int main()
{
    printf("Enter name and roll no: ");
    scanf("%s%d",var.name,&var.a.rollno);
    printf("Entered name: %s\nEntered rollno: %d",var.name,var.a.rollno);
    return 0;
}
