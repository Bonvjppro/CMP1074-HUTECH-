#include<stdio.h>

int findMax(int a[], int n){
	printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    for(int i = 1; i < n; i++){
    	if(a[i] > max){
    		max = a[i];
		}
	}
	return max;
}

int main(){
	int n;
	int a[n];
	
	int max = findMax(a,n);
	printf("So lon nhat trong mang la: %d", max);
	return 0;
}
