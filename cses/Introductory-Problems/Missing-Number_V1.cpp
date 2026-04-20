// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,no;
    cin>>n;
    int arr[n+1]={0};
    for(int i=0; i<n; i++){
        cin>>no;
        arr[no]=1;
    }
    for(int i=1; i<=n; i++){
        if(arr[i]!=1){
            cout<<i;
            break;
        }
    }
    return 0;
}