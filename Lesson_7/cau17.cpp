#include<stdio.h>

void addNewValue(int a[], int *n){
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    
    for(int i = 0; i < *n; i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < *n; i++){
        printf("%d  ", a[i]);
    }
    
    int newValue;
    printf("\nNhap gia tri can them vao cuoi mang: ");
    scanf("%d", &newValue);

    a[*n] = newValue; 
    (*n)++;

    printf("Mang sau khi them gia tri: ");
    for (int i = 0; i < *n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int n;
    int a[n]; 
    
    addNewValue(a, &n);
    return 0;
}

