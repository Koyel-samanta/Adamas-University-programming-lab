//Day-3 (30/1/25)
//Assignment-12:write a c program to calculate the compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float ci,p,r,t,n,a,b;
	printf("enter p=");
	scanf("%f",&p);
	printf("enter r=");
	scanf("%f",&r);
	printf("enter t=");
	scanf("%f",&t);
	n=(1+(r/100));
	a=pow(n,t);
	b=p*a;
	ci=b-p;
	printf("the compound interest is %f",ci);
	return 0 ;
	
}
