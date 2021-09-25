#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, n;
        cin>>n>>a>>b;
        if(a==1){
            if((n-1)%b==0) cout<<"YES"<<"\n";
            else    cout<<"NO"<<"\n";
            return;
        }else{
            ll num = 1;
            while(num<=n){
                if((n-num)%b==0){
                    cout<<"YES"<<"\n";
                    return;
                }
                num*=a;
            }
            cout<<"NO\n";
        }
}

int main(void){
ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);

    int T = 1;
    cin>>T;
    while(T--){ 
        solve();
    }
}