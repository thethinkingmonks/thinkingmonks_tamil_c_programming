#include <stdio.h>

int main()
{
    struct Student
    {
        char name[20];
        int roll_number;
        int marks[5];
    };

    struct Student s;

    printf("Enter the name : ");
    scanf("%s", s.name);

    printf("Enter the roll number : ");
    scanf("%d", &s.roll_number);

    printf("Enter the 5 marks : ");

    for (int count = 0; count < 5; count++)
    {
        scanf("%d", &s.marks[count]);
    }

    printf("Student Struct value :");
    printf("name : %s\n", s.name);
    printf("roll number : %d\n", s.roll_number);
    printf("marks :");
    for (int count = 0; count < 5; count++)
    {
        printf("%d \t", s.marks[count]);
    }
}