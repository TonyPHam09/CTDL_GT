#include<iostream>

using namespace std;

int s(int n) {
    if (n==0)
    return 1;
    else
    return (n * s(n-1));
}

int main() {
    int n;
    cout<<"nhap n: ";
    cin>>n;
    cout<<"ket qua: " << s(n);
}