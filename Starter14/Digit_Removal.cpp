#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool checkIfDigitExists(int N, int d){
    int n = N;
    bool checked = false;
    while(n){
        int rem = n%10;
        if(rem == d){
            checked = true;
            break;
        }
        n /= 10;
    }
    return checked;
}

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);
    
    int testCase;
    cin>>testCase;
    while(testCase--){
        int n, d;
        cin>>n>>d;
        if(!checkIfDigitExists(n, d)){
            cout<<"0"<<"\n";
        }else{
            int N = n, cnt = 0, ans = 0;
            while(N){
                int rem = N%10;
                N = N/10;
                cnt++;
                if(rem == d){
                    N = N*pow(10, cnt) + (rem+1)*pow(10, cnt-1);
                    ans = N - n;
                    cnt = 0;
                }
            }
            cout << ans << "\n";
        }

    }

}