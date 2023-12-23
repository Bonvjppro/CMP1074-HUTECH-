#include<stdio.h>
#include<math.h>

int main(){
	int n, d = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			d++;
		}
	}
	if(d==0){
		printf("%d la so nguyen to", n);
	}else{
		printf("%d khong la so nguyen to", n);
	}
	return 0;
}
