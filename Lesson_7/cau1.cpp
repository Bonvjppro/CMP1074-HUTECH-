#include<stdio.h>

void inOutArray(int a[], int *n){
	printf("Nhap so phan tu: ");
	scanf("%d", n);
	
	for(int i = 0; i < *n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < *n; i++){
		if(a[i] <= 100000 && a[i] >= 0){
			printf("%d  ", a[i]);
		}
	}
	printf("\n");
}

void addNewValue(int a[], int n, int *newN){
	int j, newValue;
	printf("Nhap vi tri can them trong mang: ");
	scanf("%d", &j);
	
	if(j < 0 || j > n){
		printf("Vi tri khong hop le\n");
	}else{
		printf("Nhap gia tri cua vi tri do: ");
		scanf("%d", &newValue);
		
		(*newN) = n + 1;
	
		for(int i = *newN - 1; i > j; i--){
			a[i] = a[i - 1];
		}
		
		a[j] = newValue;
		
		printf("Mang sau khi them gia tri: ");
		
	    for (int i = 0; i < *newN; i++){
	        printf("%d ", a[i]);
	    }
	}
    printf("\n");
}

void deleteIndex(int a[], int *n){
    int index;
    printf("Nhap vi tri can xoa trong mang: ");
    scanf("%d", &index);

    if (index < 0 || index >= *n){
        printf("Vi tri khong hop le\n");
    } else {
        for (int i = index; i < *n - 1; i++) {
            a[i] = a[i + 1];
        }
        (*n)--;
        printf("Mang sau khi xoa gia tri: ");
        for (int i = 0; i < *n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int findIndexX(int a[], int *n){
	int x;
	printf("Nhap phan tu muon tim kiem: ");
	scanf("%d", &x);
	
	for(int i = 0; i < *n; i++){
		if(a[i] == x){
			printf("phan tu x = %d nam o vi tri thu: %d\n", x, i + 1);
			return i;
		}		
	}
	
	printf("Khong tim thay vi tri phan tu %d trong mang\n", x);
	return -1;
}

void bubbleSort(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSortDescending(int a[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(){
	int n, newN, m;
	int a[10000];
	
	inOutArray(a, &n);
	addNewValue(a, n, &newN);
	deleteIndex(a, &newN);
	findIndexX(a, &n);
	
	printf("Mang sau khi tang dan la: ");
	bubbleSort(a, n);
	
	printf("Mang sau khi giam dan la: ");
	bubbleSortDescending(a, n);
	
	return 0;
}


