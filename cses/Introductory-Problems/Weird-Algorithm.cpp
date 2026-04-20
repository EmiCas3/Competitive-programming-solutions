// https://cses.fi/problemset/task/1068
#include <iostream>
using namespace std;
 
int main() {
	long long n; //el error pasado fue que usamos int
    cin>>n;
    cout<<n<<" ";
    while(true){
        if(n==1){
            break;
        }
        
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        } else{
            n=(n*3)+1;
            cout<<n<<" ";
        }
        
    }
    return 0;
}