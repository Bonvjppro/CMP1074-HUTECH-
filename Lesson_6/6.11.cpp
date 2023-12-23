#include<stdio.h>

float a,b;
char ch;
void nhapab(){
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap toan tu: ");
	scanf(" %c", &ch);
}

void  checkKT(){
	switch(ch){
		case '+':
			printf("%.2f + %.2f = %.2f", a, b, a + b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f", a, b, a - b);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f", a, b, a * b);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f", a, b, a / b);
			break;
		default:
			printf("toan tu khong hop le");
			break;
	}
}

int main(){
	nhapab();
	checkKT();
	return 0;
}
