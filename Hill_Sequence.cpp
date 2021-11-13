#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int> sumInRanges(vector<int> arr, int n, vector<vector<long long>> queries, int q) {
    vector<int> ans(q);
    vector<long long> sum(n+1,0);
    int mod = 1000000007;
    for(int i=0;i<n;i++){ sum[i+1]=sum[i]+arr[i]; }
    
    for(int i=0;i<q;i++){
        long long r1 = (queries[i][1]/n)*sum[n]+sum[queries[i][1]%n],
                    l1 = ((queries[i][0]-1)/n)*sum[n]+sum[(queries[i][0]-1)%n];
        
        ans[i] = (int)((r1-l1)%mod);
    }
    return ans;
}


int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);
    
    int testCase;
    cin>>testCase;
    while(testCase--){
        int n, q;
        vector<int> arr;
        vector<vector<long long>> queries;
        cin>>n;
        for(int i = 0; i<n; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        cin>>q;
        for(int i = 0; i<q; i++){
            vector<long long> temp;
            long long int l, r;
            cin>>l>>r;
            temp.push_back(l);
            temp.push_back(r);
            queries.push_back(temp);
        }

        vector<int> ans = sumInRanges(arr, n, queries, q);

        for(int i = 0; i<q; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}