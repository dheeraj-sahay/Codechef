#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll x, y, c, ans;
        cin>>x>>y;
        if(x%2==0 || y%2 == 0){
            ans = 0;
        }else if(__gcd(x+1, y)>1 || __gcd(x, y+1)>1){
            ans = 1;
        }else{
            ans = 2;
        }
        cout<<ans<<"\n";
    }
}