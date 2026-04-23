// https://codeforces.com/gym/106495/problem/G
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v,cont=0,numerostotales=0; 
    cin>>n;
    vector<int> arr(n+1,0);
    for(int i=0; i<n; i++){
        cin>>v;
        numerostotales+=v;
        arr[v]++;
    }
    

    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            cont++;
        }
    }
    cout<<cont<<endl;

    return 0;
}


/*
    if(arr[i]>1){
            cont+=arr[i]-1;
        } else if(arr[i]==0){
            cont++;
        }


        cout<< ((2*(n+1))/n); //AYUDA FORMULA SUM TOTALES 1 hasta n
    
    if (numerostotales==((2*(n))/2)){ //SAME HERE
        cout<<"0"<<endl;
        return 0;
    }
*/
