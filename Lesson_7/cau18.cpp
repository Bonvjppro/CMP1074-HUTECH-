#include <stdio.h>

void addNewValue(int a[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int x, newValue;
    printf("Nhap vi tri can them trong mang: ");
    scanf("%d", &x);

    if (x < 0 || x > *n) {
        printf("Vi tri khong hop le\n");
    } else {
        printf("Nhap gia tri cua vi tri do: ");
        scanf("%d", &newValue);
        (*n) = *n + 1;

        for (int i = *n - 1; i > x; i--) {
            a[i] = a[i - 1];
        }

        a[x] = newValue;

        printf("Mang sau khi them gia tri: ");

        for (int i = 0; i < *n; i++) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    int a[100];

    addNewValue(a, &n);

    return 0;
}

