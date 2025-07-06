#include<stdio.h>
void main(){
	int n,i,j,temp;
	printf("Enter how many numbers:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter numbers:");
	for(i=0;i<n;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;}}}
	printf("Sorted numbers:");
	for(j=0;j<n;j++){
		printf("%d ",arr[j]);}
}