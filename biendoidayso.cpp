#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int left=0;
    int right=n-1;
    int count=0;

    while(left<right){
        if(a[left]==a[right]){
            left++;
            right--;
        }
        else if(a[left]<a[right]){
            a[left+1]+=a[left];
            left++;
            count++;
        }
        else{
            a[right-1]+=a[right];
            right--;
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}