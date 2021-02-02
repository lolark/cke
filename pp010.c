//pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. Write a program pp010.c, include the header file into it. Create the main() function to input a number and check it to be even or odd using iseven() function.

#include<stdio.h>
#include"pp010.h"
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if(iseven(n)) printf("%d is even.", n);
	else printf("%d is odd.", n);

	return 0;
}
