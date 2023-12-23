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

int sumOfPrimeNum(int a[], int n){
	int sum = 0;
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		if((isPrime(a[i])) == 1){
			sum += a[i];
		}
	}
	return sum;
}

int main(){
	int n;
	int a[n];
	
	int tong = sumOfPrimeNum(a, n);
	printf("Tong cac phan tu co trong mang la: %d", tong);
	
}
