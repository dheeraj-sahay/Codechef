#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector <long long int> a(n);
        for(long long int &i: a){
            cin>>i;
        }

        vector <int> Bits(31);
        for(int n = 0; n<31; n++){
            int count = 0;
            for(long long int &i: a){
                if(i%2 != 0){
                    count++;
                }
                i = i/2;
            }
            Bits[n] = count;
        }

        int ans = 0;
        for(int &b: Bits){
            if(b%k == 0){ ans += b/k; }
            else{ ans += b/k+1; }
        }
        
        cout<<ans;
    }
    cout<<endl;
}