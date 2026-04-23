// https://codeforces.com/gym/106495/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M; 
    cin >>N>>M;
    long long cont=0, cont2=0;

    for(int i=0; i<N; i++){
        int x; 
        cin>>x;
        cont+=x;
    }

    for(int i=0; i<M; i++){
        int x; 
        cin>>x;
        cont2+=x;
    }

    cont = ((cont))*1.1;
    //cout<<cont;

    if(cont2>=cont){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}
