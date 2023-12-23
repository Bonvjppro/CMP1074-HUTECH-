#include<stdio.h>

int a,b;
void nhapab(){
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
}

void checkPTB1(){
	if(a == 0){
		if(b == 0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		printf("Phuong trinh %dx + %d = 0 co nghiem x la : %.2f", a, b, (float)(-b)/a);
	}
}

int main(){
	nhapab();
	checkPTB1();
	return 0;
}
