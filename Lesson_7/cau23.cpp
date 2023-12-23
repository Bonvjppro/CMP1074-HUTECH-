#include <stdio.h>

void reverseArray(int a[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main() {
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    reverseArray(a, n);

    printf("Mang sau khi dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

