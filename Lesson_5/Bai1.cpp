#include<stdio.h>

int main(){
	int n;
	int tong = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n > 0){
		tong += n % 10;
		n /= 10;
	}
	printf("%d", tong);
	return 0;
}

