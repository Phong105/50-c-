#include<bits/stdc++.h>

using namespace std;

class Thisinh{
    private:
        string hoten;
        string ngaysinh;
        float diem1, diem2, diem3;
        
    public:
        void nhap(){
            getline(cin,hoten);
            getline(cin,ngaysinh);
            cin >>diem1>>diem2>>diem3;
        }
        void in(){
            float tong = diem1 + diem2 + diem3;
            cout <<hoten<<" "<<ngaysinh<<" "<<fixed<<setprecision(1)<<tong<<"\n";
        }
        

};

int main(){
    Thisinh a;
    a.nhap();
    a.in();
}