#include<stdio.h>

int main(){
	int n;
	int a[n];
	
	printf("Nhap so luong so nguyen muon nhap: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int max = a[0];
	int min = a[0];
	int b = 0, c = 0, d = 0;
	
	for(int i = 1; i <= n; i++ ){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("%d la so lon nhat\n", max);
	printf("%d la so nho nhat\n", min);
	
	for(int i = 0; i< n; i++){
		if(a[i] < 0){
			b++;
		}
		if(a[i] == 0){
			d++;
		}
		if(a[i] > 0){
			c++;
		}
	}
	
	printf("co %d so am\n", b);
	printf("co %d so duong\n", c);
	printf("co %d so 0\n", d);
	return 0;
}
