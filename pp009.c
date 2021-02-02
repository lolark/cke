//pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. Create the main() function to input a number and check it to be even or odd using iseven() function.

#include<stdio.h>
int iseven(int x)
{
    if(x%2==0) return 1;
	else return 0;
}
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if(iseven(n)) printf("%d is even.", n);
	else printf("%d is odd.", n);

	return 0;
}
