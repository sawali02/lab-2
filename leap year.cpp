#include<stdio.h>
int main(){
	int a;
	printf("enter the year");
	scanf("%d",&a);
	if(a%4==0&&(a%100!=0||a%400==0))
	printf("given year is leap year");
	else
	printf("the given year is not the leap year");
	return(0);
}

