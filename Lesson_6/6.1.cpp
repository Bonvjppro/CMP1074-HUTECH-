#include<stdio.h>
int a, b;
void nhapAB(){
	printf("Nhap chieu dai: ");
	scanf("%d", &a);
	printf("Nhap chieu rong: ");
	scanf("%d", &b);
}

void tinhS(){
	int S = a * b;
	printf("Dien tich hinh chu nhat la: %d\n", S);
}

void tinhCV(){
	int cv = (a+b)*2;
	printf("Chu vi hinh chu nhat la: %d\n", cv);
}

int main(){
	nhapAB();
	tinhS();
	tinhCV();
	
	return 0;
}
