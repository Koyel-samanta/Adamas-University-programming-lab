//Assignment 43(Day-9):write a c program to calculate the factorial of a number
#include<stdio.h>
int factorial(int);
int factorial(int n){
	if(n!=0){
	return n*factorial(n-1);
	}
	else{
	return 1;
	}
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",factorial(a));
	return 0 ;
}
