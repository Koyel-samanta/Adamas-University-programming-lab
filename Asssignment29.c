//Day-6(20/2/25)
//Assignment-29:write ac program to calculate sum of first ten odd natural numbers
#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=20;i+=2){
	sum=sum+i;
	}
	printf("%d",sum);
	return 0 ;
}
