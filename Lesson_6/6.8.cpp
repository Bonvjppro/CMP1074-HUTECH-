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

int cv;
void tinhCV(){
	if(checkTriangle() == 1){
		cv = a+b+c;
		printf("Chu vi tam giac abc la: %d\n", cv);
	}	
}

float s;
void tinhS(){
	float p = (float)cv/2;
	if(checkTriangle() == 1){
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac abc la: %.2f\n", s);
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
	tinhCV();
	tinhS();
	return 0;
}
