//Assignment 48(Day-10):write a c program to find the maximum and minimum element of an array
#include<stdio.h>
void maxmin(int arr[],int size,int* max,int* min){
	*max=*min=arr[0];
	for(int i=1;i<size;i++){
	if(arr[i]<*min){
	*min=arr[i];
	}
	if(arr[i]>*max){
	*max=arr[i];
	}

	}
}
int main(){
	int size,min,max;
	printf("enter size=");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements=");
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	maxmin(arr,size,&max,&min);
	printf("%d is the maximum\n",max);
	printf("%d is the minimum\n",min);
	return 0 ;
}
