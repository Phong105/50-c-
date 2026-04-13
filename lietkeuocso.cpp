#include <bits/stdc++.h>

using namespace std;

int cp(int n){
    int can=sqrt(n);
    if(can*can==n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        if(cp(i)==1){
            cout <<i<<" ";
        }
    }
    return 0;
}