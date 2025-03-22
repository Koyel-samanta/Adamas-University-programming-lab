//Assignment 49(Day-10):write a c program to perform linear search
#include<stdio.h>
int linearsearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
	
	if(arr[i]==key){
	return i;
	}
	else{
	return -1;
	}
	}
}
int main(){
	int size,key,result;
	printf("enter size=");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements=");
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
result=linearsearch(arr,size,key);
	printf("enter the key=");
	scanf("%d",&key);
	if(result!=-1){
	printf("found");
	}
	else{
	printf("not found");
	}
	return 0 ;
	
}
