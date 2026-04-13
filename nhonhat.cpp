#include<bits/stdc++.h>

using namespace std;

void solve(){
    int m,s;
    cin>>m>>s;
    if((s==0 && m>1) || s>9*m){
        cout<<"-1 -1\n";
        return;
    }

    if(s==0 && m==1){
        cout<<"0 0\n";
        return;
    }

    string max_num="";
    int s_max=s;
    for(int i=0;i<m;i++){
        if(s_max>=9){
            max_num+="9";
            s_max-=9;
        }
        else{
            max_num+=to_string(s_max);
            s_max=0;
        }
    }

    string min_num="";
    vector<int>min_digits(m,0);
    int s_min=s-1;
    for(int i=m-1;i>=0;i--){
        if(s_min>=9){
            min_digits[i]=9;
            s_min-=9;
        }
        else{
            min_digits[i]=s_min;
        }
    }
    min_digits[0]=s_min+1;
    for(int i=0;i<m;i++){
        min_num+=to_string(min_digits[i]);
    }
    cout<<min_num<<" "<<max_num<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

