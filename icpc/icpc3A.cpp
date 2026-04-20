#include <iostream>
using namespace std;

int main(){
    int n,st=0,ni;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>ni;
        st=st+ni;
    }
    int c=0, it;
    it=n;
    for(int i=0; i<it; i++){
        if(st%n==0){
            break;
        }
        else{
            n=n-1;
            c++;
        }
    }
    cout<<c;
    return 0;
}