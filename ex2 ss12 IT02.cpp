#include <stdio.h>
int mang(int arr[],int n){
	int mang; 
	for(int i=0;i<n;i++){
		printf("arr[%d] :", i);
		scanf("%d", &arr[i]); 
	} 
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	} 
	return mang; 
} 
int main(){
	int n; 
	int arr[n];
	printf("nhap so phan tu cua mang :");
	scanf("%d", &n);
	printf("nhap phan tu cua mang \n");
	mang(arr,n); 
	return 0; 
} 
