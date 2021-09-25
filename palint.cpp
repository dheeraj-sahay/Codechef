#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);

    int t;      cin>>t;
    while(t--)
    {
        long long int n, x, MaxInt = 0, MinOp = 1e9+7;
        map <int, int> A, Xored;

        cin>>n>>x;
        int a;
        for(int i = 0; i<n; i++){
            cin>>a;
            A[a]++;
        }

        if(x == 0){
            for(auto itr = A.begin(); itr != A.end(); itr++){
                MaxInt = __max(itr->second, MaxInt);
            }
            cout << MaxInt << " 0\n";
            continue;
        }

        for(auto itr = A.begin(); itr != A.end(); itr++){
            Xored[itr->first ^ x]++;
        }
        int temp;
        for(auto itr = A.begin(); itr != A.end(); itr++){
            if(Xored.find(itr->first) != Xored.end()){
                temp = itr->second + Xored[itr->first];
                if(temp > MaxInt){
                    MaxInt = temp;
                    MinOp = Xored[itr->first];
                }else if(temp == MaxInt){
                    MinOp = __min(MinOp, Xored[itr->first]);
                }
            }else{
                temp = itr->second;
                if(temp > MaxInt){
                    MaxInt = temp;
                    MinOp = 0;
                }else if(temp == MaxInt){
                    MinOp = 0;
                }
            }
        }
        cout<<MaxInt<<" "<<MinOp<<"\n";
    }
}