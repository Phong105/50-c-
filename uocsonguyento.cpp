#include<bits/stdc++.h>

using namespace std;

void prime_divisor(int n){
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout <<i<<" ";
            n/=i;
        }
    }
    if(n>1){
        cout <<n<<" ";
    }
}

int main(){
    int n;
    cin >>n;
    prime_divisor(n);
    return 0;
}