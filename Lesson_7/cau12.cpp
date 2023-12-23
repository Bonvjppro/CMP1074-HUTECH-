#include<stdio.h>

int countNumSameX(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int x, d = 0;
	printf("Nhap phan tu x muon tim kiem: ");
	scanf("%d", &x);
	
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			d++;
		}
	}
	return d;
}

int main(){
	int n;
	int a[n];
	
	int count = countNumSameX(a, n);
	printf("Co %d phan tu co gia tri bang x", count);
	return 0;
}
