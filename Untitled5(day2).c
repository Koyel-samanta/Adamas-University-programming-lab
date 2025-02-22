//Day-2(16/1/25)
//assignment-10:write a c program to swap two numbers without using a variable
#include<stdio.h>
int main(){
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n ");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0 ;
}
