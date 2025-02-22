//Day-2(16/1/25)
//assignment-8:write a c program to convert fahrenheit to celsius
#include<stdio.h>
int main(){
	float f1,c1,f2,c2;
	printf("enter f1=");
	scanf("%f",&f1);
	printf("enter c2=");
	scanf("%f",&c2);
	c1=(f1-32)*(5.0/9.0);
	f2=((9.0*c2)/5.0)+32;
	printf("%f\n",f2);
	printf("%f\n",c1);
	return 0 ;
}
