#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n != 0){
		printf("Ki tu cua %d la: %c\n", n, (char)n);
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	return 0;
}
