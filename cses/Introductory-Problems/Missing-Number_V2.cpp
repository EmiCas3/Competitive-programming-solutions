#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    vector<int>vec;
    int n,nu;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>nu;
        vec.push_back(nu);
    }
 
    sort(vec.begin(), vec.end());
 
    for(int i=1; i<=n; i++){
        if(vec[i-1]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}