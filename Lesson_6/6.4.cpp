#include<stdio.h>

int n;

void nhapN(){
	printf("Nhap n: ");
	scanf("%d", &n);
}

void sumDivisorOfN(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	printf("Tong cac uoc so tu 1 toi %d la: %d", n, sum);
}

int main(){
	nhapN();
	sumDivisorOfN();
	return 0;
}
