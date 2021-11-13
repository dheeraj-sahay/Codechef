#include <iostream>
#include <bitset>
using namespace std;


int main(void){
    //int a = 0;
    // cout<<"ith "<<" \t"<<"bit i"<<" \t"<<"Ored bit "<<" \t"<<"i | i-1\n";
    // for (size_t i = 0; i < 17; i++)
    // {
    //     a = a|i;
    //     cout<<i<<" \t"<<bitset<6>(i)<<" \t"<<bitset<6>(a)<<" \t"<<bitset<6>(i|(i-1))<< " \t"<<( i|(i-1)) << endl;
    // }

    //cout<<bitset<32>(45332)<<"\t"<<bitset<32>(32768)<<endl;
    int bitMS = 5;
    int ans = 1<<bitMS;
    int chk = ans<<1;
    cout<<ans<<"\t"<<chk<<endl;
    
}