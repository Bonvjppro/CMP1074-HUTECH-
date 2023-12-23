#include<stdio.h>

int countMax(int a[], int n, int *max){
	printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    (*max) = a[0];
    int d = 0;
    for(int i = 1; i < n; i++){
    	if(a[i] > *max){
    		*max = a[i];
		}
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] == *max){
			d++;
		}
	}
	return d;
}

int main(){
	int n, max;
	int a[n];
	
	int count = countMax(a,n,&max);
	printf("Co %d gia tri bang gia tri max (%d)", count, max);
	return 0;
}
