// https://cses.fi/problemset/task/1083
#include <iostream>
using namespace std;

int main(){
    //resolver con manipulación de bits XOR
    int n, res=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        res^=i;
    }

    for(int i=0; i<n-1; i++){
        int m;
        cin>>m;
        res^=m;
    }
    
    cout<<res<<endl;
    return 0;
}