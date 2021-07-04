#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int F[N], B[N], a[N];
int main(void){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int sum = 0, ans = 0;

        for(int i = 0; i<n; i++){ cin>>a[i]; }
        
        sort(a, a+n);

        for(int i = 0; i<n; i++){ sum += a[i]; }

        F[0] = a[0];    B[n-1] = a[n-1];

        for(int i = 1; i<n; i++){ F[i] = __gcd(a[i], F[i-1]); }
        for(int i = n-2; i >= 0; i--){ B[i] = __gcd(a[i], B[i+1]); }

        long long int min = LLONG_MAX;
        for(int i = 0; i<n; i++){
            ans = (sum - a[i] + __gcd(F[i-1], B[i+1]))/__gcd(F[i-1], B[i+1]);
            if(ans<min){ min = ans; }
        }
        cout<<min<<endl;
    }
}