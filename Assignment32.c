//(day-7) (27/2/25)
//write a program to count the numbers of a digit
#include<stdio.h>
int main(){
	int n,c=0;
	printf("enter n=");
	scanf("%d",&n);
	while(n>0){
	n=n/10;
	c++;
	}
	printf("%d",c);
	return 0 ;
}
