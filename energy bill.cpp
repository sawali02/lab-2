#include<stdio.h>
int main(){
	int a;
	printf("enter the units consumed");
	scanf("%d",&a);
	if(a>=0&&a<=50)
	printf("the energy bill is %d",a*2);
	if(a>=50&&a<=100)
	printf("the energy bill is %d",a*4);
	else
	printf("the energy bill is %d",a*5);
	return(0);
}
