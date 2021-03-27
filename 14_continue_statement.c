/*
Continue statement
- continue statement will skip the current iteration of the loop 
and moves to next iteration 

How continue statement is used in 
1. While Loop
2. For Loop
*/

#include <stdio.h>

int main()
{
    int loop_count, counter = 1;

    printf("Enter the loop count : ");
    scanf("%d", &loop_count);

    while (counter <= loop_count)
    {
        printf("While Start Counter : %d\n", counter);
        counter++;
        if (counter == 5)
        {
            continue;
        }
        printf("While End Counter : %d\n", counter);
    }

    for (counter = 1; counter <= loop_count; counter++)
    {
        printf("For Loop Start counter : %d\n", counter);
        if (counter == 7)
        {
            continue;
        }
        printf("For Loop end counter : %d\n", counter);
    }
    return 0;
}