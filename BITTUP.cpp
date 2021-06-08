/* Chef has two numbers N and M. Help Chef to find number of integer N-tuples (A1,A2,…,AN) 
such that 0≤A1,A2,…,AN≤2M−1 and A1&A2&…&AN=0, where & denotes the bitwise AND operator.
Since the number of tuples can be large, output it modulo 10^9+7 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define mod 1000000007;

ll power(ll x, ll y){
    ll result = 1;
    while(y > 0){
        if(y & 1){
            result = (result*x)%mod;
        }
        y = y >> 1;
        x =  (x*x)%mod;
    }

    return result;
}

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);
    ll T, N, M;
    cin>>T;
    while (T)
    {
        cin>>N>>M;
        ll a = power(2, N) - 1;
        ll ans = power(a, M);
        cout << ans << endl;
        T--;
    }
    
}