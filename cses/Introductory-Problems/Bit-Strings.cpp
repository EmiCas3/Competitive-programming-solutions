// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll MOD = 1e9+7;
 
ll solucion(long long b, long long e){
    long long ans = 1;
    while(e){
        if(e&1LL){
            ans=(ans*b)%MOD;
        }
        b = (b*b)%MOD;
        e>>=1LL;
    }
    return ans;
}
 
 
 
int main() {
	long long n;
    cin>>n;
    cout<<solucion(2LL,n)<<endl;
    return 0;
}