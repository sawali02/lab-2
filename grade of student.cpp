#include<stdio.h>
int main(){

int a,b,c,d,e,f;
printf("enter marks scored in physics\n");

 printf("enter marks scored in maths\n");
printf("enter marks scored in chemistry\n");
printf("enter marks scored in biology\n");
printf("enter marks scored in computer\n");
scanf("%d %d %d %d %d",&a ,&b,&c,&d,&e);
f=((a+b+c+d+e)/5);
if(f>=90)
printf("the percentage of the student is %d and the grade is A",f);
if(f<=90&&f>=80)
printf("the percentage of the student is %d and the grade is B",f);
if(f<=80&&f>=70)
printf("the percentage of the student is %d and the grade is C",f);
if(f<=70&&f>=60)
printf("the percentage os the student is %d and the grade is D",f);
if(f<=60&&f>=40)
printf("the percentage of the student is %d and the grade is E",f);
if(f<=40)
printf("the percentage of the student is %d and the grade is F",f);
return(0);
}

