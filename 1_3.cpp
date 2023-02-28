#include<stdio.h>
#include<conio.h>

struct ToaDo {
	double x,y;
};
void nhaptoado(struct ToaDo &a) {
	printf("NHAP TOA DO\n");   
	printf("Nhap x: ");
	scanf("%d",&a.x);
	printf("Nhap y: ");
	scanf("%d",&a.y);
}
void xuattoado(struct ToaDo a){
	printf("%d,%d",a.x,a.y);   
}
int main() {
	struct ToaDo Toado;
	nhaptoado(Toado);
	xuattoado(Toado);
	getch();
}         
