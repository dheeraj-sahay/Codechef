#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* long long int fibonacci(int p, int num){
    return p+num;
}
int main(void){
    
    int max = 4000000;
    long long sum = 0;
    long long int num = 1; long long int prev = 0;
    while(num < max){
        long long int temp = num;
        num = fibonacci(prev, num);
        prev = temp;
        if(num%2==0){ sum+=num; }
    }
    cout<<sum;
} */

/* ll MaxPrime(ll n){
    ll prime = -1;

    while(n%2 == 0){
        prime = 2;
        n >>= 1;
    }

    while(n%3 == 0){
        prime = 3;
        n = n/3;
    }

    for(int i = 5; i<sqrt(n); i+=6){
        while (n%i == 0)
        {
            prime = i;
            n = n/i;
        }
        while(n%(i+2) == 0){
            prime = i+2;
            n = n/(i+2);
        }
        
    }
    if(n > 4){ prime = n; }

    return prime;
}

int main(void){
    cout<<MaxPrime(600851475143);
} */


int main(void){
    int n = 20;
    int ans = 1;
    vector<int> take;
    take.push_back(2);
    take.push_back(3);
    for(int i = 4; i<=n; i++){
        if(i%2 == 0){
            take.push_back(2);
        }else if(i%3 == 0){
            take.push_back(3);
        }else{
            take.push_back(i);
        }
    }

    for(int &i: take){
        ans = ans*i;
    }
    cout<<ans;
}