//pp002: Write a program to input a number and check it to be even or odd using switch statement.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    switch(num % 2)
    {
        case 0:
            printf("%d is even.", num);
            break;
        case 1:
            printf("%d is odd.", num);
            break;
    }
    return 0;
}
