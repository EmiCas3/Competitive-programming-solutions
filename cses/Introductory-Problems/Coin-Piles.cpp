// https://cses.fi/problemset/task/1754/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int r,a,b;
    cin>>r;
    for(int i=0; i<r; i++){
        cin>>a>>b;
        if(((a+b)%3==0)&&((a<=2*b)&&(b<=2*a))){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}