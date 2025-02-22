//Day-2(16/1/25)
//assignment-6:write a c program to calculate simple interest
#include<stdio.h>
int main(){
	float si;
	int p,r,t;
	printf("enter p=");
	scanf("%d",&p);
	printf("enter r=");
	scanf("%d",&r);
	printf("enter t=");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("the simple interest is %f",si);
	return 0 ;
}
