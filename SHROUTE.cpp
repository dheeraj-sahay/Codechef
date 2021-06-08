#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);
    cout.tie(0);
    ll t, n, m; 
    cin>>t;
    while(t){
        cin>>n>>m;
        ll a[n];
        ll b[m];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<m; i++){
            cin>>b[i];
        }
        vector<ll> r, l;    // r->1  l->2
        int one = -1, two = -1;
        int mx = 1e9;

        for(ll i = 0; i<n; i++){
            if(a[i] == 1){
                r.push_back(0);
                one = i;
            }else if(one == -1){
                r.push_back(mx);
            }else if(a[i] == 2){
                r.push_back(0);
            }else{
                r.push_back(i-one);
            }
        }

        for(ll i = n-1; i>= 0; i--){
            if(a[i] == 2){
                l.push_back(0);
                two = i;
            }else if(two == -1 && a[i] == 0){
                l.push_back(mx);
            }else if(a[i] == 1){
                l.push_back(0);
            }else{
                l.push_back(two-i);
            }
        }

        reverse(l.begin(), l.end());

        for(ll i = 0; i < m; i++){
            ll cur = b[i];
            if(a[0]!=0 && a[cur-1] != 0){
                cout<<"0"<<" ";
            }else if(cur == 1){
                cout << "0" << " ";
            }else{
                int ans = 0;
                if(r[cur-1] == mx && l[cur-1] == mx){
                    ans = -1;
                }else{
                    ans = min(r[cur-1], l[cur-1]);
                }
                cout << ans << " ";
            }
        }

        cout<<endl;
        t--;
    }
}