#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n);
for(i=2;i<=i-1;i++)
{
if(n%i==0)
{
printf("Number is not prime");
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime");

    return 0;
}
