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
