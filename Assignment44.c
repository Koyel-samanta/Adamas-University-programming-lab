//Assignment 44(Day-9):write a c program to find the GCD of two numbers using recursion
#include<stdio.h>
int gcd(int ,int);
int gcd(int x,int y){
	if(y!=0){
	return gcd(y,x%y);
	}
	else{
	return x;
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0 ;
}
