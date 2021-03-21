
#include <stdio.h>

int main()
{
    int marks[5];
    int count = 0;

    printf("Enter 5 marks : ");
    for (count = 0; count < 5; count++)
    {
        scanf("%d", &marks[count]);
    }

    printf("5 marks entered : ");
    for (count = 0; count < 5; count++)
    {
        printf("%d \t", marks[count]);
    }
}