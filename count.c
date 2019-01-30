#include<stdio.h>
int main()
{
int num,count=0;
printf("input: \n");
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("output:");
return 0;
}
