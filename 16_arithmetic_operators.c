/*
C Arithmetic Operators
+	addition
-	subtraction
*	multiplication
/	division
%	remainder
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers : \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Add : %d\n", num1 + num2);
    printf("Subtract : %d\n", num1 - num2);
    printf("Multiple : %d\n", num1 * num2);
    printf("Division : %f\n", (float)num1 / (float)num2);
    printf("Remainder : %d\n", num1 % num2);
    return 0;
}