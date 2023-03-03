#include<stdio.h>
#include<math.h>

int s(int n) {
    if (n==0)
    return 0;
    else
    return (n*n + s(n-1));
}

int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("ket qua: %d",s(n));
}