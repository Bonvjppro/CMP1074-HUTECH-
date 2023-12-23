#include<stdio.h>
#include <math.h>

int lastPerfectSquare(int a[], int n){
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int lastPerfect = -1; 

    for (int i = n - 1; i >= 0; i--){
        if (sqrt(a[i]) == floor(sqrt(a[i]))){ 
            lastPerfect = a[i];
            break;
        }
    }

    return lastPerfect;
}

int main(){
	int n;
	int a[n];
	
	int perfectSquare = lastPerfectSquare(a, n);
	if (perfectSquare != -1){
        printf("So chinh phuong cuoi cung la: %d", perfectSquare);
    } else{
        printf("Khong co so chinh phuong trong mang.");
    }
	return 0;
}

