#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int msb(ll n){ int msb_p = -1; while(n){n >>= 1; msb_p++;} return msb_p; }

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);
    
    int testCase;
    cin>>testCase;
    while(testCase--){
        ll N;       cin>>N;
        if(N == 1){ cout<<"1\n"; continue; }
        ll val, chk, l1, l2, sol1, sol2;
        int bitMS;
        bitMS = msb(N);
        chk = pow(2, bitMS);
        (chk == N)?val = N-1:val = N;
        l1 = pow(2, bitMS);
        l2 = pow(2, bitMS-1);
        sol1 = val-l1+1;
        sol2 = l1- l2;
        (sol2 > sol1)?cout<<sol2<<"\n":cout<<sol1<<"\n";
    }

}