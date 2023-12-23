#include<stdio.h>
#include<math.h>

int a, b, c;

void nhapABC(){
	printf("Nhap canh a: ");
	scanf("%d", &a);
	printf("Nhap canh b: ");
	scanf("%d", &b);
	printf("Nhap canh c: ");
	scanf("%d", &c);
}

int checkTriangle(){
	if(a+b>c && a+c>b && b+c>a){
		return 1;
	}
	return 0;
}

float s;

void tinhS(){
	float p = (float)(a+b+c)/2;
	if(checkTriangle() == 1){
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac abc la: %.2f\n", s);
	}
}

void tinhHeight(){
	float ha, hb, hc;
	if(checkTriangle() == 1){
		ha = 2*s/a;
		hb = 2*s/b;
		hc = 2*s/c;
		printf("Duong cao canh a la: %.2f\n", ha);
		printf("Duong cao canh b la: %.2f\n", hb);
		printf("Duong cao canh c la: %.2f\n", hc);
	}
}

int main(){
	nhapABC();
	if(checkTriangle() == 1){
		printf("abc la tam giac.\n");
	}else{
		printf("abc khong la tam giac.\n");\
		return 0;
	}
	tinhS();
	tinhHeight();
	return 0;
}
