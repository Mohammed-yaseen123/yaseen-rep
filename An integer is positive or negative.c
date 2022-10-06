//Check whether an integer is positive or negative
#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // true if number is less than 0
    if (number < 0) {
    printf("You have entered %d... this is an negative number", number);
    }
    else
    printf("You have entered an positive number");
    return 0;
}
