#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the basic salary ");
scanf("%d",&a);
b=16*a/100;
c=44*a/100;
d=a+b+c;
printf("the gross salary of the employer is %d",d);
return(0);

}
