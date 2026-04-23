// https://codeforces.com/gym/106495/problem/J

#include <bits/stdc++.h>
#define FIN ios::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;

long long MOD = 1e9 + 7;

int main() {
    FIN;
	long long n,in,par,impar,resp=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>in;
        if(in%2==0){
            par=in/2;
            impar=in/2;
        } else {
            par=in/2;
            impar=in-par;
        }
        resp+=((par*(par-1)*(par-2))/6)%MOD;
        resp+=(((impar*(impar-1))/2)*par)%MOD;
        cout<<resp%MOD<<endl;
        resp=0;
    }

}
