#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	float tong = 0;
	for(int i = 1; i <= n; i++){
		tong += 1.0/i;
	}
	printf("%.2f", tong);
	return 0;
}
