//Day-5(13/2/25)
//Assignment-24:write a c program to find out the greatest among three numbers using ladder if else
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	if(a>b && a>c){
	printf("a is the greatest");
	}
	else if(b>a && b>c){
	printf("b is the greatest");
	}
	else{
	printf("c is the greatest");
	}
	return 0 ;
}

