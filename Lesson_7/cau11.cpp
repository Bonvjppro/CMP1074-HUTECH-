#include<stdio.h>

int countEvenNum(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int d = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			d++;
		}
	}
	return d;
}

int main(){
	int n;
	int a[n];
	
	int count = countEvenNum(a, n);
	printf("Co %d phan tu la so chan", count);
	return 0;
}
