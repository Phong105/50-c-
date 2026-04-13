#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    unordered_map<int,int> page;
    for(int i=0;i<n;i++){
        cin>>a[i];
        page[a[i]]++;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(page[a[i]]>1){
            ans++;
        }
    }
    cout<<ans<<"\n";

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}