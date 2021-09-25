#include <bits/stdc++.h>
using namespace std;


int main(void){
    int t, a, b, c, d, e; 
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>e;

        // int maxVal = __max(__max(a, b), c);
        // int minVal = __min(__min(a, b), c);

        // if(maxVal > d || minVal > e){
        //     cout<<"NO\n";
        //     continue;
        // }

        // if((a+b) <= d && c <= e){
        //     cout<<"YES\n";
        // }else if((a+c) <= d && b <= e){
        //     cout<<"YES\n";
        // }else if((b+c) <= d && a <= e){
        //     cout<<"YES\n";
        // }else{
        //     cout<<"NO\n";
        // }

        // int sum = a+b+c;
        // int check = sum - d;
        // if(check > e){ cout << "NO\n"; continue;}
        // else{ cout << "YES\n"; }

        int abc = a+b+c;
        int de = d+e;
        (abc > de)?cout<<"NO\n":cout<<"YES\n";

    }
}