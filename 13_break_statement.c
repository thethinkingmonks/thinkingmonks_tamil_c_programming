/*
Break Statement 
- break statement is used to ends the loop

How break is used inside 
1. While Loop
2. For Loop
*/

#include <stdio.h>

int main()
{
    int loop_count, counter = 1;

    printf("Enter the loop count :");
    scanf("%d", &loop_count);

    while (counter <= loop_count)
    {
        printf("While counter : %d\n", counter);
        if (counter == 5)
        {
            break;
        }
        counter++;
    }

    for (counter = 1; counter <= loop_count; counter++)
    {
        printf("For counter : %d\n", counter);
        if (counter == 7)
        {
            break;
        }
    }
    return 0;
}