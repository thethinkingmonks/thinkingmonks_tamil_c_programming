/*
Switch Statement
- type of selection control mechanism

Step in execution of switch
1. Condition Test
2. Execute block of code
3. No break execute next block of code
4. If no condition is met then execute default block of code 
*/

#include <stdio.h>

int main()
{
    int user_input;

    printf("Enter 5, 10, 15 : ");
    scanf("%d", &user_input);

    switch (user_input)
    {
    case 5:
        printf("You entered 5\n");

    case 10:
        printf("You entered 10\n");
        break;

    case 15:
        printf("You entered 15\n");
        break;

    default:
        printf("You have not entered 5,10, or 15");
    }
    return 0;
}