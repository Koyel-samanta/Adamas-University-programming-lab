//Day-3 (30/1/25)
//Assignment-11:write a c program to find out the last digit of a number
#include<stdio.h>
int main(){
	int a,b,n;
	printf("enter a=");
	scanf("%d",&a);
	b=a/10;
	n=a-(b*10);
	printf("%d",n);
	return 0 ;
}
