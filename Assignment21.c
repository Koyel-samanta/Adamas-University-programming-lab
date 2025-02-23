//Day-4(6/2/25)
//Assignment-21:write a c program to check if its a whole number or not
#include<stdio.h>
int main(){
	float n;
	printf("enter n=");
	scanf("%f",&n);
	if(n>0 && n==(int)n){
	printf("n is a whole number");
	}
	else{
	printf("n is not a whole number");
	}
	return 0 ;
}
