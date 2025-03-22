//Assignment 47(Day-10):write a c program to print the array in the reverses number
#include<stdio.h>
void reverse(int arr[],int size){
	for(int i=size-1;i>=0;i--){
	printf("%d",arr[i]);
	}
}
int main(){
	int size;
	printf("enter size=");
	scanf("%d",&size);
	int arr[size];
	printf("enter thr elements=");
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	reverse(arr,size);
	return 0 ;
	
}
