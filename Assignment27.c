//Day-6(20/2/25)
//Assignment-27:write a c program to calculate a multiplication table of a number
#include<stdio.h>
int main(){
	int n,i;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0 ;
}
