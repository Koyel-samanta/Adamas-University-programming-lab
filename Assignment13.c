//Day-3 (30/1/25)
//Assignment-13:write a c program to find out the area and perimeter of a rectangle
#include<stdio.h>
int main(){
	int area,perimeter,l,w;
	printf("enter l=");
	scanf("%d",&l);
	printf("enter w=");
	scanf("%d",&w);
	area=l*w;
	perimeter=2*(l+w);
	printf("area=%d\n",area);
	printf("perimeter=%d\n",perimeter);
	return 0 ;
} 
