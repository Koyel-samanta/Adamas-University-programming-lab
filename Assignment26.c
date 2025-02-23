//Day-5(13/2/25)
//Assignment-26:write a c program to find out the greatest among three numbers usimg nested if else
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	if(a>b){
	if(a>c){
	printf("a is the greatest");
	}
	else{
	printf("c is the greatest");
	}
	}
	if(b>c){
	if(b>a){
	printf("b is the greatest");
	}
	else{
	printf("a is the greatest");
	}
	}
	if(c>a){
	if(c>b){
	printf("c is the greatest");
	}
	else{
	printf("b is the greatest");
	}
	}
	return 0 ;
}
