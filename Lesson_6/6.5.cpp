#include<stdio.h>

int GBD, GKT;

void nhapGBDvaGKT(){
	printf("Nhap gio bat dau (GBD): ");
    scanf("%d", &GBD);
	printf("Nhap gio ket thuc (GKT): ");
    scanf("%d", &GKT);
}

int tong;
void tinhtien(){
	int soGioThue = GKT - GBD;
	if(GKT <= 17){
		tong = soGioThue * 2500;
	}else{
		tong = soGioThue * 3000;
	}
	printf("So tien phai thanh toan cho %d gio thue la: %d dong.\n", soGioThue, tong);
}

int main() {
	nhapGBDvaGKT();
	if (!(6 <= GBD && GBD < GKT && GKT <= 21)) {
        printf("Thoi gian khong hop le.\n");
    }else{
    	tinhtien();
	}

    return 0;
}
