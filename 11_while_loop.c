/*
while(test condition){
    statements;
}
*/

#include <stdio.h>

int main()
{
    int count, i = 1;

    printf("Enter the loop count :");
    scanf("%d", &count);

    while (i <= count)
    {
        printf("%d\t", i);
        i++;
    }
}
