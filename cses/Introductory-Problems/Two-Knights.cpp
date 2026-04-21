// https://cses.fi/problemset/task/1072/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	unsigned long long n, a0=0, a1=6, a2=16, a3=30, a4=12;
    cin>>n;
 
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<a0<<endl;
        }else if(i==1){
            a0+=a1;
            cout<<a0<<endl;
        } else if(i==2){
            a1+=a2;
            a0+=a1;
            cout<<a0<<endl;
        } else if(i==3){
            a2+=a3;
            a1+=a2;
            a0+=a1;
            cout<<a0<<endl;
        } else{
            a3+=a4;
            a2+=a3;
            a1+=a2;
            a0+=a1;
            cout<<a0<<endl;
        }
    }
    return 0;
}