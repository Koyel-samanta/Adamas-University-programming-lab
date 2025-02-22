//Day-3 (30/1/25)
//Assignment-14:write a c program to find out the ceiling and floor value of a positive and a negative number
#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	printf("enter a=");
	scanf("%f",&a);
	printf("enter b=");
	scanf("%f",&b);
	printf("the ceiling value of a is %f\n",ceil(a));
	printf("the floor value of a is %f\n",floor(a));
	printf("the ceiling value of b is %f\n",ceil(b));
	printf("the floor value of b is %f\n",floor(b));
	return 0 ;
}
