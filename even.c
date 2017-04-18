#include<stdio.h>
main()
{
int a,b,i;
printf("enter the starting even number");
scanf("%d",&a);
printf("enter the ending even number");
scanf("%d",&b);
for( i=a;i<=b;i++)
{
if(i%2==0)
{
printf("\n%d",i);
}
}
}
