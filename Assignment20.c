//Day-4(6/2/25)
//Assignment-20:write a c program to check whether a coin is head or tail when it has been tossed once
#include<stdio.h>
int main(){
	char toss;
	printf("enter toss=");
	scanf("%c",&toss);
	if(toss=='H'){
	printf("Head");
	}
	else{
	printf("Tail");
	}
	return 0 ;
}
