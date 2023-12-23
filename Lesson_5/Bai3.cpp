#include<stdio.h>

int main(){
	int n;
	int tong = 0;
	int s =1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n;i++){
		s *= i;
		tong += s;
	}
	printf("%d", tong);
	return 0;
}
