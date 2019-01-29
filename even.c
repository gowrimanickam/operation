#include<stdio.h>
int main()
{
int n;
printf("Enter a number \n");
scanf("%d",&n);
if(n%2==0)
printf("Even number");
else if(n==1)
printf("odd number");
  else
    printf("invalid number");
return 0;
}
