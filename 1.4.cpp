#include<stdio.h>
#include<conio.h>

struct ToaDo {
	double x,y,z;
};
void nhaptoado(struct ToaDo &a) {
	printf("NHAP TOA DO\n");   
	printf("Nhap x: ");
	scanf("%d",&a.x);
	printf("Nhap y: ");
	scanf("%d",&a.y);
	printf("Nhap z: ");
	scanf("%d",&a.z);
}
void xuattoado(struct ToaDo a){
	printf("%d,%d,%d",a.x,a.y,a.z);   
}
int main() {
	struct ToaDo Toado;
	nhaptoado(Toado);
	xuattoado(Toado);
	getch();
}           
