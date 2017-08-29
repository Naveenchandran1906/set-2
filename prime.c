#include <stdio.h>
void main()
{
int m,n,i,a;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&m,&n);
printf("Prime numbers between %d and %d are:",m,n);
while (m<n)
{
a= 0;
for(i = 2; i <= m/2; ++i)
{
if(m% i == 0)
{
a= 1;
break;
}
}
if (a== 0)
printf("%d ",m);
++m;
}
}
