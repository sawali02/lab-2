#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the 3 bowling techniques");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	printf("the maximum point value is %d",a);
	else if(b>=c)
	printf("the maximum point value is %d",b);
	else
printf("the maximum point value is %d",c);
	return(0);
}
