#include<stdio.h>
#include<stdbool.h>

bool isPrime(int number){
    int n;

    for (int i = 0; i < n; i++){
        if (number <= 1){
            return 0;
        }
    }

    for (int i = 2; i * i <= number; i++){
        if (number % i == 0){
            return 0;
        }
    }

    return 1;
}

int firstPrimeNum(int a[], int n){
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		if((isPrime(a[i])) == 1){
			return a[i];
		}
	}
}

int main(){
	int n;
	int a[n];
	
	int primeNum = firstPrimeNum(a, n);
	printf("So nguyen to dau tien trong mang la: %d", primeNum);
	
}
