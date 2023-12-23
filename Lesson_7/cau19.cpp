#include <stdio.h>

void deleteFirstEven(int a[], int *n){
    int found = 0; 
    int index;

    for (int i = 0; i < *n; i++){
        if (a[i] % 2 == 0) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found){
        for (int i = index; i < *n - 1; i++){
            a[i] = a[i + 1];
        }

        (*n)--;
        
        printf("Mang sau khi xoa phan tu chan dau tien: ");
        for (int i = 0; i < *n; i++){
            printf("%d ", a[i]);
        }
    } else{
        printf("Khong tim thay phan tu chan trong mang.\n");
    }
}

int main(){
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    deleteFirstEven(a, &n);

    return 0;
}

