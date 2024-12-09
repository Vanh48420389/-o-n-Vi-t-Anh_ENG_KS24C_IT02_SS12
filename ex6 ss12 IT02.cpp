#include <stdio.h>

int  kiemTraSoHoanHao(int n) {
    if (n <= 1){
    	return false; 
	} 
	int sum = 0; 
	for(int i = 1; i <= n / 2; i++) { 
	if (n % i == 0){
		sum += i; 
	} 
	} 
	return sum==n;
}

int main() {
    int number;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &number);
    if (kiemTraSoHoanHao(number)) {
        printf("%d la so hoan hao .\n", number);
    } else {
        printf("%d khong phai la so hoan hao .\n", number);
    }
    return 0;
}

