#include <stdio.h> 
	
int findMax(int arr[], int n, int max){
	for(int i=0;i<n;i++){
		printf("arr[%d] :", i);
		scanf("%d", &arr[i]); 
	} 
	max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i]; 
		} 
	} 
	return max; 
} 
int main(){
	int n;
	int arr[n];
	printf("nhap so phan tu cua mang :");
	scanf("%d", &n);
	printf("nhap phan tu cua mang \n");
	int max = findMax(arr,n,max); 
	printf("gia tri lon nhat trong mang la :%d ", max); 
	return 0; 
} 
