#include<stdio.h>

int firstOddNum(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			return a[i];
		}
	}
}

int main(){
	int n;
	int a[n];
	
	int oddNum = firstOddNum(a, n);
	printf("So chan dau tien la: %d", oddNum);
	return 0;
}
