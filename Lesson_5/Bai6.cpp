#include<stdio.h>

int main(){
	int n;
	int tong = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		tong *= i;
	}
	printf("%d", tong);
	return 0;
}
