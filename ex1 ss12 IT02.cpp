#include <stdio.h>
int tinhTong(int a,int b){
	int sum = a+b;
	return sum; 
}	 
int main(){	
	int number_1,number_2,Tong;
	printf("nhap so thu nhat:");
	scanf("%d", &number_1);
	printf("nhap so thu hai:");
	scanf("%d", &number_2);
	Tong = tinhTong(number_1,number_2);
	printf("tong cua 2 so vua nhap la :%d", Tong); 
	return 0; 
} 
