#include<stdio.h>

int deleteMax(int a[], int n){
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

    for(int i = 0; i < n; i++){
        if(a[i] == max){
            for(int j = i; j < n - 1; j++){
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("\nMang sau khi xoa cac gia tri bang gia tri max: ");

    for (int i = 0; i < n; i++){
        printf("%d  ", a[i]);
    }

    return n;
}

int main(){
	int n;
	int a[n];
	deleteMax(a,n);
	return 0;
}
