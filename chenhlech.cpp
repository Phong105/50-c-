#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int min_diff=INT_MAX;
    for(int i=1;i<n;i++){
        min_diff=min(min_diff,a[i]-a[i-1]);
    }
    cout << min_diff << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}