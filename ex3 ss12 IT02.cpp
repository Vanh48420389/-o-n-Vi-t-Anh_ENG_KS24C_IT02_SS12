#include <stdio.h>
long long tinhGiaiThua(int n) {
	if(n<0){
		printf("khong c� giai thua "); 
	} 
	int giaiThua=1; 
	for(int i=2;i<=n;i++){
		giaiThua *= i; 
	} 
	return giaiThua;
}
int main(){
	int number; 
	printf("nhap so nguyen :");
	scanf("%d", &number); 
	printf("giai thua cua %d l� : %lld",number,tinhGiaiThua(number)); 
	return 0; 
} 
