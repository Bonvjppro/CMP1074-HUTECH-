#include<stdio.h>

int sumOfArray(int a[], int n){
	int sum = 0;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	
	return sum;
}

int main(){
	int n;
	int a[n];
	
	int tong = sumOfArray(a, n);
	printf("Tong cac phan tu co trong mang la: %d", tong);
	
}
