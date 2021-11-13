#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int MSBitP(ll n){ int msb_p = -1; while(n){n >>= 1; msb_p++;} return msb_p; }

int main(void){
    ll n;
    cin>>n; 
    int maxBit = MSBitP(n), last, val;
    int chk = pow(2, maxBit);
    if(chk == n){
        val = n-1;
    }else{
        val = n;
    }

    last = pow(2, maxBit);
    int last2 = pow(2, maxBit-1);
    int sol1 = val-last+1;
    int sol2 = last - last2;
    cout<<last<<endl;
    cout<<sol1<<endl;
    cout<<sol2<<endl;
    if(sol2 > sol1){
        cout<<"Ans: "<<sol2<<endl;
    }else{
        cout<<"Ans: "<<sol1<<endl;
    }
        // ll len = 0, lenCnt = 0, ptemp = 1;//temp prev and value;
        // for(int i = 1; i<=N; i++){
        //     ptemp = (ptemp&i);
        //     if(ptemp > 0){
        //         lenCnt++;
        //     }else{
        //         lenCnt = 0;
        //         ptemp = i;
        //         i--;
        //     }

        //     if(len < lenCnt){
        //         len = lenCnt;
        //     }
            
        // }
        // cout<<len<<"\n";


}