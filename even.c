#include<stdio.h>
int main()
{
int n;
  scanf("%d",&n);
  if(n>0)
  {
if(n%2==1)
printf("Odd");
else 
  printf("Even");
  }
  else
    printf("invalid");
return 0;
}
