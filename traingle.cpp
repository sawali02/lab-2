#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&& b==c&& c==a)
	printf("the triangle is equilateral");
	if((a==b ||b==c)&&c!=a)
	printf("the triangle is isoceles");
	else if(a!=b&&b!=c&&c!=a)
	printf("the triangle is scalene");
	return(0);
}
