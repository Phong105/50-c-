#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        char c = tolower(s[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
            continue;
        }
        else{   
            cout<<"."<<c;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

    return 0;
}