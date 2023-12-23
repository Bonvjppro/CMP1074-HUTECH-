#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void listPrimes(int n) {
    printf("Cac so nguyen to nho hon %d la:\n", n);
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Nhap so n: ");
    scanf("%d", &n);

    listPrimes(n);

    return 0;
}

