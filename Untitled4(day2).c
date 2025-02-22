//Day-2(16/1/25)
//assignment-9:write a c program to swap two number with using a variable
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a=");


	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0 ;
	
	
}
