#include <stdio.h>

void  mang(int arr[100][100],int r, int c ){
	printf("nhap cac phan tu cua mang :\n");
	for(int i=0;i<r;i++){
		for(int j;j<c;j++){
			printf("arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}	
	}
}
void  maTran(int arr[100][100],int r, int c){
	 
	printf("ma tran la:"); 
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d", arr[i][j]); 
		} 
		printf("\n"); 
	} 
}
int main (){
	int r,c;
	int arr[100][100]; 
	printf("nhap so hang:");
	scanf("%d",&r);
	printf("nhap so cot:");
	scanf("%d",&c);
	mang(arr,r,c);
	maTran(arr,r,c); 
	return 0; 
} 
