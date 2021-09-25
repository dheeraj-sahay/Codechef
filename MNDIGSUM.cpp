#include <bits/stdc++.h>
using namespace std;

int fun(int n, int B){
    int temp = 0; 
    while(n > 0){
        temp += n%B;
        n /= B;
    }
    return temp;
}

int solve(int n, int l, int r){
    int base = 0, check = INT_MAX;

    for(int i = r; i >= l; i++){
        if(r >= n && n%i == 0){ return i; }

        int temp = fun(n, i);
        if(temp <= check){
            check = temp;
            base = i;
        }
    }
    return base;
}

void main(){
    int t;
    cin>>t;
    while(t--){
        int n, l, r;
        cin>>n>>l>>r;

        cout<<solve(n, l, r)<<"\n";
    }
}