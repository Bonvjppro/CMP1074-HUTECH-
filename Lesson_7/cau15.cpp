#include<stdio.h>

int lastNumSameX(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int index = 0;
	
	int x;
	printf("Nhap phan tu x: ");
	scanf("%d", &x);
	
	for (int i = n - 1; i >= 0; i--){
        if (a[i] == x){
            index = i;
            break;
        }
    }

    return index + 1;
}

int main(){
	int n;
	int a[n];
	
	int indexLastX = lastNumSameX(a, n);
	printf("Phan tu co gia tri bang x nam o vi tri thu: %d", indexLastX);
	return 0;
}
