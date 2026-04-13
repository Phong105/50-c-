#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >>n;

    set<char> tuiloc;
    
    for(int i=0;i<n;i++){
        string s;
        cin >>s;

        for(char c:s){
            tuiloc.insert(c);
        }
    }
    for(char c:tuiloc){
        cout <<c<<" ";
    }
    cout <<"\n";
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }

    return 0;
}