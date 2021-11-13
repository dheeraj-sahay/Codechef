//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;

int msb(ll n){ int msb_p = -1; while(n){n >>= 1; msb_p++;} return msb_p; }

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);
    
    int testCase;
    cin>>testCase;
    while(testCase--){
        ll x;       cin>>x;
        if(x == 0){ cout<<1<<"\n";    continue; }
        int bitMS = msb(x);
        //ll ans = pow(2, bitMS);
        ll ans = 1<<bitMS;
        ll chk = ans<<1;
        (x == chk-1)?cout<<chk<<"\n":cout<<ans<<"\n";
    }

}