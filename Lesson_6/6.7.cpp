#include<stdio.h>

int a,b,c,d;
void nhapABCD(){
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("Nhap so c: ");
	scanf("%d", &c);
	printf("Nhap so d: ");
	scanf("%d", &d);
}

int findMax() {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}

int main(){
	nhapABCD();
	int max = findMax();
	printf("%d la so lon nhat.", max);
	return 0;
}
