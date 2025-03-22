//Assignment 42(Day-9):write a c program to find the sum of n terms using recursion
#include<stdio.h>
int sum(int);
int sum(int n){
	if(n!=0){
	return n+sum(n-1);
	}
	else{
	return 0;
	}
} 
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",sum(a));
	return 0 ;
}
