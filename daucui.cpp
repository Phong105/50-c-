#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    
    unordered_map<char,long long> mp;

    for(char c:s){
        mp[c]++;
    }

    long long ans =0;

    for(auto pair:mp){
        long long C=pair.second;
        ans+=(C*(C+1))/2;
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