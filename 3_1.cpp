#include<stdio.h>

void nhapmang(int a[], int &n) {
	n = 0;
	int y;
    printf("mang : ");
	do {

		scanf("%d", &y);
		if (y != 0)
			a[n++] = y;
	} while(y != 0);
}

void xuatmang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}

void tangmang(int a[] , int n) {
    int tang;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) {
            tang = a[i];
            a[i] = a[j];
            a[j] = tang;                
            }
        }
    }
}

int main() {
    int n = 0;
    int a[n];
    nhapmang(a,n);
    printf("\nmang vua nhap: ");
    xuatmang(a,n);

    tangmang(a,n);
    printf("\nket qua: ");
    xuatmang(a,n);
}