#include<stdio.h>

int main(){
	int n = 10;
	float ds = 2000000;
	for(int i = 1; i <= 10; i++){
		ds += (ds * 0.015);
	}
	printf("dan so cua thanh pho sau 10 nam la: %.2f", ds);
	return 0;
}
