#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int row1=0,row2=n-1,col1=0,col2=m-1;
    
    int prev=a[row1+1][col1];
    int curr;

    while(row1<row2 && col1<col2){
        for(int i=col1;i<=col2;i++){
            curr=a[row1][i];
            a[row1][i]=prev;
            prev=curr;
        }
        row1++;

        for(int i=row1;i<= row2;i++){
            curr=a[i][col2];
            a[i][col2]=prev;
            prev=curr;
        }
        col2--;

        for(int i=col2;i>=col1;i--){
            curr=a[row2][i];
            a[row2][i]=prev;
            prev=curr;
        }
        row2--;

        for(int i=row2;i>=row1;i--){
            curr=a[i][col1];
            a[i][col1]=prev;
            prev=curr;
        }
        col1++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
