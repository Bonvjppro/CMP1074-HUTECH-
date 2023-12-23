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

int main() {
    int n;

    printf("Nhap so luong so nguyen to can liet ke: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien la:\n", n);

    int count = 0;
    int i = 2;

    while (count <= n) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    printf("\n");
    return 0;
}

