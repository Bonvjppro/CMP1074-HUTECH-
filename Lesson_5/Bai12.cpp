#include<stdio.h>

int perfectNum(int num){
	int sum = 1;
	
	for(int i = 2; i*i <= num; ++i){
		if(num % i == 0){
			sum += i;
			if(i != num / i){
				sum += num / i;
			}
		}
	}
	return (sum == num);
}

int main(){
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Cac so hoan hao la: ");
	
	for(int i = 2; i < n; ++i){
		if(perfectNum(i)){
			printf("%d ", i);
		}
	}
	return 0;
}
