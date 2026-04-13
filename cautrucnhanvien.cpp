#include <bits/stdc++.h>

using namespace std;

class Nhanvien{
    private:
        string hoten;
        string gioitinh;
        string ngaysinh;
        string diachi;
        string masothue;
        string ngaykyhopdong;
        string manhanvien;
        static int dem;
    public:
        Nhanvien(){
            dem++;
            manhanvien ="0000"+to_string(dem);
            
        }
        void input(){
            getline(cin,hoten);
            getline(cin,gioitinh);
            getline(cin,ngaysinh);
            getline(cin,diachi);
            getline(cin,masothue);
            getline(cin,ngaykyhopdong);
        }
        void output(){
            cout <<manhanvien<<" "<<hoten<<" "<<gioitinh<<" "<<ngaysinh<<" "<<diachi<<" "<<masothue<<" "<<ngaykyhopdong<<"\n";
        }

};

int Nhanvien :: dem=0;

int main(){
    int t;
    cin >> t;
    cin.ignore(); 
    while(t--){
        Nhanvien a;
        a.input();
        a.output();
    }
    
}