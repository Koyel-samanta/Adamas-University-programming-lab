//Day-6(20/2/25)
//Assignment-30:write a c program to find out the factorial of a number
#include<stdio.h>
int main(){
	int i,n,factorial=1;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	factorial=factorial*i;
	}
	printf("%d",factorial);
	return 0 ;
}
