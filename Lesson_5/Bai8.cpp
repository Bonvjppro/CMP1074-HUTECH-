#include<stdio.h>

int main() {
    int a, b;
    
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);
	int a1 = a, b1 = b;
    int gcd, temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    int lcm = (a1 * b1) / gcd;

    printf("Uoc chung lon nhat cua %d va %d la %d\n", a1, b1, gcd);
    printf("Boi chung nho nhat cua %d va %d la %d", a1, b1, lcm);

    return 0;
}

