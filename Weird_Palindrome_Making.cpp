#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);
    
    int testCase, n;
    cin>>testCase;
    while(testCase--){
        cin >> n;
        int noo = 0, temp;
        for(int i=0; i<n; i++){
            cin >> temp;
            if(temp%2 != 0){
                noo++;
            }
        }
        if(noo%2 != 0) noo--;

        cout << noo/2 << "\n";  
    }

}