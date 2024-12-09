#include <stdio.h>

int kiemTraSoNguyenTo(int n) {
    if (n <= 1){
    	return false;
	} 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0){
        	return false;
		}
    }
    return true;
}

int main() {
    int number_1, number_2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &number_1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &number_2);
    if (kiemTraSoNguyenTo(number_1)) {
        printf("%d la so nguyen to.\n", number_1);
    } else {
        printf("%d khong phai la so nguyen to.\n", number_1);
    }

    if (kiemTraSoNguyenTo(number_2)) {
        printf("%d la so nguyen to.\n", number_2);
    } else {
        printf("%d khong phai la so nguyen to.\n", number_2);
    }

    return 0;
}

