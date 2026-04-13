#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    int target =86;
    int temp=n%100;
    if(temp==target){
        cout <<"1";
    }
    else{
        cout <<"0";
    }
}