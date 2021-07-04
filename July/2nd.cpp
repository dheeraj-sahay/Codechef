#include <bits/stdc++.h>
using namespace std;

int main(void){
ios_base::sync_with_stdio(false);     cin.tie(0);     cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int g, c;
        cin>>g>>c;
        int ans = c*c/2;
        ans /= g;
        cout<<ans<<endl;
    }
}