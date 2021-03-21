/*
Pointers 
 - Derived Datatype
 - Pointers stores addresses
*/

#include <stdio.h>

int main()
{
    int num = 10;

    int *ptr;

    printf("Value of num : %d\n", num);
    printf("Address of num : %p\n", &num);

    ptr = &num;

    printf("Address ptr of num : %p\n", ptr);
    printf("Value of ptr : %d\n", *ptr);

    *ptr = 25;

    printf("New of num : %d\n", num);
    printf("Ptr new value : %d\n", *ptr);

}