#include<stdio.h>

int firstIndexOfMax(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int max = a[0];
	int index = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
			index = i;
		}
	}
	return index + 1;
}

int main(){
	int n;
	int a[n];
	
	int index = firstIndexOfMax(a, n);
	printf("So lon nhat dau tien nam o vi tri %d", index);
	return 0;
}
