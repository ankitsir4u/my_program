#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[15];
    int roll_number;
    int age;
    double total_marks;

};
int main()
{
    struct student students[5];
    int n=sizeof(students)/sizeof(struct student);

    students[0].roll_number=1;
    scanf("%s",students[0].name);

    students[0].age=12;
    students[0].total_marks=78.50;

    students[1].roll_number=2;
    scanf("%s",students[1].name);
    students[1].age=11;
    students[1].total_marks=55.84;

    
    students[2].roll_number=3;
    scanf("%s",students[2].name);
    students[2].age=13;
    students[2].total_marks=65;

    
    students[3].roll_number=4;
    scanf("%s",students[3].name);
    students[3].age=14;
    students[3].total_marks=75;

    
    students[4].roll_number=5;
    scanf("%s",students[4].name);
    students[4].age=16;
    students[4].total_marks=99;

     
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
return 0;


}