#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, a, b, one = 0, zero = 0;
        string S;
        cin>>n>>a>>b;
        cin>>S;
        for(int i = 0; i<n; i++){
            if(S.at(i) == '0'){ zero++; }
            else{ one++; }
        }
        cout<<(zero*a)+(one*b)<<"\n";
    }
}