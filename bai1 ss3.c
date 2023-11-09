#include <stdio.h>
int main(){
	float r;
	const float PI = 3.14;
	printf("nhap ban kinh: ");
	scanf("%f",&r);
	float dientich = r*r*PI;
	float chuvi = r*2*PI;
	printf("dien_tich_hinh_tron la: %.2f\n");
	printf("chu_vi_hinh_tron: %2f");

}
