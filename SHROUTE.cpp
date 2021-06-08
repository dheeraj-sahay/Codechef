#include <bits/stdc++.h>
using namespace std;

long long int route(int a[], long long int bi, long long int a_size){
    long long int right, left;      // right -> 2  left -> 1
    long long int limit_r, limit_l, min_r = 0, min_l = 0;
//    a_size = a_size - 1;
//    limit = a_size - bi;
//    if(limit >= bi){ limit = limit;}else{limit = bi;}
//    long long int limit_max = __max(a_size-bi, bi);
//    if(a_size - bi > bi){ limit_r = a_size-bi; limit_l = bi; }else{ limit_l = a_size-bi; limit_r = bi; }
    limit_r = a_size - bi;
    limit_l = bi;

    for(long long int i = 1; i <= limit_r; i++){
        if(a[bi+i] == 2){
            min_r = i;
            break;
        }
    }

    for(long long int i = 1; i <= limit_l; i++){
        if(a[bi-i] == 1){
            min_l = i;
            break;
        }
    }

    if(min_r == 0 && min_l == 0){ return -1; }
    else if(min_r == 0 || min_l == 0){ return __max(min_r, min_l);}
    else{ return __min(min_r, min_l);}

/*     for(long long int min = 1; min <= limit; min++){
        right = bi + min;
        left = bi - min;
        if(right <= a_size && a[right] == 2){ return min;}
        if(left >= 0 && a[left] == 1){ return min;}
    } */

}

int main(void){
    ios::sync_with_stdio(false);    cin.tie(0);

    long long int T, N, M;

    cin >> T;

    while(T){
        cin>>N>>M;
        int B[M];
        int A[N];
        //input 
        for(long long int i = 0; i<N; i++){
            cin>>A[i];
        }

        for(long long int i=0; i<M; i++){
            cin>>B[i];
        }
        
        //sol
        long long int n = N-1;
        for(long long int i = 0; i < M; i++){
            long long int result = 0;
            //long long int l = 0, right = 0, left = 0;
            long long int s = B[i] - 1; 
            if(A[s] == 0){
                long long int right, left;      // right -> 2  left -> 1
                long long int limit_r, limit_l, min_r = 0, min_l = 0;
                limit_r = n - s;
                limit_l = s;

                for(long long int j = 1; j <= limit_r; j++){
                    if(A[s+j] == 2){
                        min_r = j;
                        break;
                    }
                }

                for(long long int j = 1; j <= limit_l; j++){
                    if(A[s-j] == 1){
                        min_l = j;
                        break;
                    }
                }

                if(min_r == 0 && min_l == 0){ result = -1; }
                else if(min_r == 0 || min_l == 0){ result = __max(min_r, min_l);}
                else{ result = __min(min_r, min_l);}
               // result = route(A, s, N-1);
                /* (N-s > s)? l = N-s: l = s;
                for(long long int x = 1; x < l; x++){
                    right = s + x;      left = s - x;
                    if(right < N && A[right-1] == 2){ result = x; cout<<result; break; }
                    if( left >= 0 && A[left+1] == 1){ result = x; cout<<result; break; }
                } */
                

            }else{
                result = 0;
            }
        //output
            cout<<result<<" ";
        }
        cout<<endl;
        T--;
    }
}