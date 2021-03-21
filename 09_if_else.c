/*
Flow control - if else statement
1. if statement
syntax :
if (condition){
    statments
}

2. if ... else statement
syntax :
if (condition){
    execute statements if condition is true
}
else{
    execute statement if condition is false
}
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age : ");
    scanf("%d", &age);

    if (age > 20)
    {
        printf("You are an adult");
        printf("You entered more than 20");
    }
    else
    {
        printf("You are young");
    }
}
