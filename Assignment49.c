//Assignment 49(Day-10):write a c program to reverse all the element of an array
#include<stdio.h>
int reversedigit(int n){
	int digit,reverse=0;
	while(n>0){
	digit=n%10;
	reverse=(reverse*10)+digit;
	n=n/10;
	}
	return reverse;
}
void reversearray(int arr[],int size){
	for(int i=0;i<size;i++){
	arr[i]=reversedigit(arr[i]);
	}
}
int main(){
	int size;
	printf("enter size=");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements=");
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	reversearray(arr,size);
	printf("after reversing the array\n");
	for(int i=0;i<size;i++){
	printf("%d",arr[i]);
	}
	return 0 ;
}
