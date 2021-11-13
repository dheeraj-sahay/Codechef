#include<iostream>
typedef long long int ll;
using namespace std;


int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);     cout.tie(0);

    int testCase;   cin>>testCase;
    while(testCase--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        
        int A = 1, B = 1,C = 1;
        if(b <= d-a){
            B = 0;
            if(c <= d-a-b){
                C = 0;
            }
        }
        
        cout<<A+B+C<<"\n";
        
    }

}