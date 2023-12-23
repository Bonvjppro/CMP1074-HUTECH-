#include<stdio.h>
#include<math.h>

float a,b,c,delta;
void nhapabc(){
	printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
}

void checkPT(){
	if(a==0){
        if(b==0){
                if(c==0){
                    printf("Phuong trinh co vo so nghiem");
                }else{
                    printf("Phuong trinh vo nghiem");
                }    
            }else{
            printf("Phuong trinh co nghiem duy nhat la: %.2f", -c/b);
        }    
    }else{
        delta=b*b-4*a*c;
        if (delta<0){
            printf("Phuong trinh vo nghiem");
            }else if (delta == 0){
                printf("Phuong trinh co nghiem kep la: %.2f", -b/(2*a));
                }else{
                    printf("phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f", (-b + sqrt(delta)/(2*a)), (-b - sqrt(delta)/(2*a)));
                }
    }
}

int main(){
	nhapabc();
	checkPT();
	return 0;
}
