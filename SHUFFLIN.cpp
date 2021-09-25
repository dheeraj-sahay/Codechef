#include <bits/stdc++.h>
using namespace std;

int sol(int n){
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int even_n = n/2, odd_n = n/2 + n%2;
    int even_a = 0, odd_a = 0;

    for(int i = 0; i < n; i++){
        (a[i]%2 == 0)?even_a++:odd_a++;
    }

    if(even_a-odd_n > 0){ return n-(even_a - odd_n); }
    else if(odd_a-even_n > 0){ return n-(odd_a - even_n); }

    return n;
}

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);

    int t;      cin>>t;

    while(t--){
        int n;
        cin >> n;
        cout << sol(n) << endl;
    }
    
}