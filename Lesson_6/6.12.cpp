#include <stdio.h>

int n;

void nhapn(){
	printf("Nhap so n: ");
    scanf("%d", &n);
}

int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void checkn(){
	if((isPrime(n))==1){
		printf("%d la so nguyen to.\n", n);
	}else{
		printf("%d khong la so nguyen to.\n", n);
	}
}

void listPrimes() {
    printf("Cac so nguyen to nho hon %d la:\n", n);
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() { 
	nhapn();
	checkn();   
    listPrimes();

    return 0;
}
