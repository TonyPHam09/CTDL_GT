#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    cout<<"nhap so nguyen: ";
    cin>>a;
    cout<<"nhap tu: ";
    cin>>b;
    cout<<"nhap mau: ";
    cin>>c;
    cout<<"hon so la: "<<a<<" "<<b<<"/"<<c<<" = "<< ((a*c)/c) + (b/c);
}