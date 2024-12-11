#include <stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int n1, n2; 
    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so thu hai: ");
    scanf("%d", &n2);
    
    int ucln = UCLN(n1, n2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", n1, n2, ucln);
    return 0;
}

