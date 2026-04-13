#include <bits/stdc++.h>

using namespace std;

class Phanso{
    private:
        long long tu;
        long long mau;
    public:
        Phanso(long long tu,long long mau){
            this -> tu =tu;
            this -> mau = mau;
        }
        void toigian(){
            long long gcd1 = __gcd(tu,mau);
            tu /= gcd1;
            mau /= gcd1;
        }

        Phanso cong(Phanso p2){
            long long tu1 =(tu*p2.mau) + (mau*p2.tu);
            long long mau1 =mau*p2.mau;

            Phanso res(tu1,mau1);
            res.toigian();
            return res;
        } 
        void print(){
            cout<<tu<<"/"<<mau<<"\n";
        }
};

int main(){
    long long tu,mau,tu1,mau1;
    cin>>tu>>mau>>tu1>>mau1;
    Phanso p(tu,mau);
    Phanso p2(tu1,mau1);
    Phanso sum = p.cong(p2);
    sum.print();
}