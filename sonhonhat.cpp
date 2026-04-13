#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<bool> check(1000001,false);
    for(int i=0;i<n;i++){
        int x;
        cin >>x;

        if(x>0 && x<=1000000){
            check[x]=true;
        }
    }

    for(int i=1;i<1000001;i++){
        if(!check[i]){
            cout << i << endl;
            break;
        }
    }
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}