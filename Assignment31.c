//Day-6(20/2/25)
//Assignment-31:write a c program to make a fibonacci series
#include<stdio.h>
int main(){
	int i,n,a=0,b=1,s=0;
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	printf("%d\t",a);
	s=a+b;
	a=b;
	b=s;
	}
	return 0 ;
}
