#include<stdio.h>
int main()
{
   int a[10];
   printf("Enter array elements: \n");
   for(int i=0; i<10; i++) scanf("%d",&a[i]);
   printf("Even numbers in the array are: \n");
   for(int i=0; i<10; i++)
   {
     if(a[i]%2==0)   printf("%d ", a[i]);
   }
   return 0;
}
