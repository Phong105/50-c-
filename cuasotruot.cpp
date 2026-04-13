#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    int m;
    cin >>m;
    vector<vector<int>> b(m,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin >> b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int res=a[i][j]*b[i%m][j%m];
            cout << res << " ";
        }
            cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}