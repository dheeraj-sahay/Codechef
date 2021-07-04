#include<bits/stdc++.h>
using namespace std;

int case1(int x){ return 7*x; }
int case2(int d, int y, int z){return ((d*y) + z*(7 - d)); }
int main(void){
ios_base::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);
    
    int t;
    cin>>t;

    while(t--){
        int d, x, y, z;
        cin>>d>>x>>y>>z;
        int one = case1(x);
        int two = case2(d, y, z);
        (one>two)?cout<<one<<endl:cout<<two<<endl;
    }
}