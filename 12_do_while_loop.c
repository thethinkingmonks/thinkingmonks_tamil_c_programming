/*
do {
    statements;
}while(test condition)
*/

#include <stdio.h>

int main()
{
    int count, i = 1;

    printf("Enter the loop count : ");
    scanf("%d", &count);

    do
    {
        printf("%d\t", i);
        i++;
    } while (i <= count);
}