#include<stdio.h>

int a, b, temp, gcd, lcm;
int a1, b1;

void nhapAB(){
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
}

void  ucln(){
	a1 = a; b1= b;
	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	printf("Uoc chung lon nhat cua %d va %d la %d\n", a1, b1, gcd);
}

void bcnn(){
	lcm = (a1 * b1) / gcd;
	printf("Boi chung nho nhat cua %d va %d la %d", a1, b1, lcm);
}

int main(){
	nhapAB();
	ucln();
	bcnn();
	
	return 0;
}
