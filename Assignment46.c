//Assignment 46(Day-9):write a c program to calculate sum of square of first ten natural number using function
#include<stdio.h>
int sumofsquare(int);
	int sumofsquare(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
	sum=sum+(i*i);
	}
	return sum;
	
	}
	int main(){
	int a;
	scanf("%d",&a);
	printf("%d",sumofsquare(a));
	return 0 ;
	}

