#include<stdio.h>
int main(){
	int y,m;
	printf(" enter the year enter the month");
	scanf("%d %d",&y,&m);
	
	
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		printf("the number of days are 31");
	
		if(m==4||m==6||m==9||m==11)
		printf("the number of days is 30");
		
		
		if((y%4==0 && (y%100!=0 || y%400==0))&&(m==2))
		printf("the number of days is 29");
		else if (m==2)
		printf("the number of days is28");
	
		return(0);
		
	
	
	
	
	 
}
