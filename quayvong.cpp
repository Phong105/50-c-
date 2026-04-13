#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,d;
    cin >> n >> d;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=d;i<n;i++){
        cout << a[i] << " ";
    }
    for(int i=0;i<d;i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}