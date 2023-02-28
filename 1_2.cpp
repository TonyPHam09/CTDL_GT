#include<stdio.h>
#include<conio.h>

struct HonSo {
	int a,b,c;
};
void NhapHonSo(struct HonSo &s) {
	printf("NHAP HON SO\n");   
	printf("Nhap so nguyen: ");
	scanf("%d",&s.a);
	printf("Nhap tu: ");
	scanf("%d",&s.b);
    printf("nhap mau: ");
    scanf("%d",&s.c);
}
void XuatHonSo(struct HonSo &s){
	printf("%d %d/%d",s.a,s.b,s.c);   
}
int main() {
	struct HonSo KQHS;
	NhapHonSo(HS);
	XuatHonSo(HS);
	getch();
}   
