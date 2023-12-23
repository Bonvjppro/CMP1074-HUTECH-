#include<stdio.h>

int lastEvenNum(int a[], int n){
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int lastEven = -1;

    for (int i = n - 1; i >= 0; i--){
        if (a[i] % 2 == 0){
            lastEven = a[i];
            break;
        }
    }

    return lastEven;
}

int main(){
	int n;
	int a[n];
	
	int evenNum = lastEvenNum(a, n);
	if (evenNum != -1){
        printf("So chan cuoi cung la: %d", evenNum);
    } else{
        printf("Khong co so chan trong mang.");
    }
	return 0;
}
