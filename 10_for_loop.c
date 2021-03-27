/*
For Loop consists of
1. Initialization of control variable
2. Test condition
3. Update of control variable 
*/

#include <stdio.h>

int main()
{
    int count;
    int i = 1;

    printf("Enter the loop count : ");
    scanf("%d", &count);

    for (; i <= count;)
    {
        printf("%d\t", i);
        i++;
    }
}