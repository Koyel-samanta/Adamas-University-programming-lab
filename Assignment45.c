//Assignment 45(Day-9):write a c program to print the fibonacci series using recursion
#include<stdio.h>
void fibonacci(int,int,int);
void fibonacci(int a,int b,int n){
if(n>0){
	printf("%d",a+b);
	return fibonacci(b,a+b,(n-1));
}	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d %d",0,1);
	fibonacci(0,1,(n-1));
	return 0 ;
	
}
