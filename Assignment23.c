//Day-5(13/2/25)
//Assignment-23:write a c program to find out if a year is leap year
#include<stdio.h>
int main(){
	int year;
	printf("enter year=");
	scanf("%d",&year);
	if(year%400==0){
	printf("leap year");
	}
	else if(year%100==0){
	printf("not a leap year");
	}
	else if(year%4==0){
	printf("leap year");
	}
	else{
	printf("not a leap year");
	}
	return 0 ;
}

