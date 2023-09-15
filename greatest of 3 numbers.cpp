#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c); 
if(a>b && a>c){

printf(" the greatest number is %d",a);
}
else if(b>c){

printf(" the greatest number is %d",b);
}
else{

printf(" the greatest number is %d",c);
}

return(0);
}
