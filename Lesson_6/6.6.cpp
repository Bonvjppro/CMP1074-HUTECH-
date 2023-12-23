#include<stdio.h>

int n, in, out;
void nhapGioRaVao(){
	printf("Nhap gio vao cua cong nhan: ");
	scanf("%d", &in);
	printf("Nhap gio ra cua cong nhan: ");	
	scanf("%d", &out);
}

int tong;
void tinhTienLuong(){
	int timeWork = out - in;
	if(out <= 12){
		tong = timeWork * 6000;
	}else{
		tong = timeWork * 7500;
	}
	printf("tien luong cua cong nhan la: %d", tong);
}

int main(){
	nhapGioRaVao();
	if(6 <= in && in < out && out <= 18){
		tinhTienLuong();	
	}else{
		printf("thoi gian cua cong nhan khong hop le.");
	}
	return 0;
}
