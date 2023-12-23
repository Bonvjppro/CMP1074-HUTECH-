#include<stdio.h>

int fibonacci(int n){
	if(n <= 1){
		return n;
	}else{
		int a=0, b=1, temp;
		for(int i = 2; i <= n; ++i){
			temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
}

int main(){
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int result = fibonacci(n);
	printf("Ket qua cua so hang thu %d cua day fibonacci la: %d", n, result);
	
	return 0;
}
