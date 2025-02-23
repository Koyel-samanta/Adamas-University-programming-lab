//Day-6(20/2/25)
//Assignment-28:write a c program to calculate the sum of squares of first ten natural number
#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=10;i++){
	sum=sum+(i*i);
	}
	printf("%d",sum);
	return 0 ;
}
