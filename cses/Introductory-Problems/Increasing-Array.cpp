// https://cses.fi/problemset/task/1094

#include <iostream>
using namespace std;
 
int main() {
	int n;
    long long xi,cg=0,resta=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>xi;
        arr[i]=xi;
    }
 
    int ap1=0,ap2=0,i=0;
    while(i<n){
        if(arr[ap2]<arr[ap1]){
            resta=arr[ap1]-arr[ap2];
            cg=cg+resta;
            arr[ap2]=arr[ap2]+resta;
        }
        if(arr[ap1]<=arr[ap2]){
            ap1=ap2;
            ap2++; 
        }
        i++;
    }
 
    cout<<cg;
    return 0;
}