#include<bits/stdc++.h>

using namespace std;

bool isBalanced(int num){
    int even_count=0;
    int odd_count=0;
    while(num>0){
        int digit=num%10;
        if(digit%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
        num/=10;
    }
    return even_count==odd_count;
}

int main(){
    int n;
    cin >> n;

    int start=pow(10,n-1);
    int end=pow(10,n)-1;

    int printed=0;

    for(int i=start;i<=end;i++){
        if(isBalanced(i)){
            cout << i << " ";
            printed++;
            if(printed==10){
                cout <<"\n";
                printed=0;
            }
        }
    }
    return 0;
}