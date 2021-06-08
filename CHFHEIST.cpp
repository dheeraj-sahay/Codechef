#include <bits/stdc++.h>
using namespace std;

/* int main(){
    long long int T, D, d, P, Q;
    cin>>T;
    while (T)
    {
        cin>>D>>d>>P>>Q;
        long long int money_print = 0;
        int q = 0;
        long long int rate = 0;
        for(int i = 0; i < D; i=i+d){
                rate = P + q*Q;
                money_print = money_print + d*rate;
                q++;
        }

        if(D%d != 0){
            money_print = money_print + (D%d)*rate;
        }

        cout << money_print << endl;
        T--;
    }
    

    return 0;
} */
/* 
int main(){
    long long int T, D, d, P, Q;
    cin>>T;
    while(T){
        long long int result = 0; long long int r = 0;
        int q = 0;
        cin>>D>>d>>P>>Q;
        r = d;
        for(long long int i = 0; i < D; i++){
            if(r){
                result = result + (P+Q*q);
            }
            else{
                q++;
                result = result + (P+Q*q);
                r = d;
            }
            r--;
        }
        cout << result<<endl;
        T--;
    }
    return 0;
} */


/* 
int main(){
    long long int T, D, d, P, Q;
    cin>>T;
    while(T){
        long long int result = 0; long long int d_money = 0;
        long long int i = 0; long long int x = 1; int rem;
        cin>>D>>d>>P>>Q;
        x = D/d;
        rem = D%d;
        for(i; i<x; i++){
            d_money = P+Q*i;
            d_money = d_money*x;
            result = result + d_money;
        }
        if(rem==0){
            cout<<result<<endl;
        }else{
            d_money = P+Q*i;
            d_money = d_money*rem;
            result = result + d_money;
            cout<<result<<endl;
        }
        
        T--;
    }
    return 0;
} */

int main(){
    long long int T, D, d, P, Q;
    cin>>T;
    while(T){
        cin>>D>>d>>P>>Q;
        long long int result = 0;
        long long int n = D/d;
        int rem = D%d;
        long long int an = P + ((n-1)*Q);
        long long int sum_n = (n*(P + an))/2;
        if(rem == 0){
            result = d*sum_n;
        }else{
            long long int temp = rem*(an + Q);
            result = (d*sum_n) + temp;
        }
        cout << result << endl;
        T--;
    }
    return 0;
}