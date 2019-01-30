#include<stdio.h>
int main()
{
int yr;
printf("input \n");
scanf("%d",&yr);
if((yr%400)==0)
printf("leap year",yr);
else if((yr%100)==0)
printf("no",yr);
else if((yr%4)==0)
printf("leap year",yr);
else
printf("no",yr);
return 0;
}
