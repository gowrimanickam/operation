#include<stdio.h>
int main()
{
int a=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
a++;
}
}
if(a==2)
printf("yes");
else
printf("no");
return 0;
}
