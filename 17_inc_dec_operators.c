/*
Increment Operator ++
- add the value by one

Decrement Operator --
- sub the value by one 

1. Postfix increment a++
2. Prefix increment ++a
3. Postfix decrement a--
4. Prefix decrement --a
*/

#include <stdio.h>

int main()
{
    int temp, a = 10;

    temp = --a;

    printf("Temp : %d\n", temp);
    printf("A value : %d\n", a);
    return 0;
}