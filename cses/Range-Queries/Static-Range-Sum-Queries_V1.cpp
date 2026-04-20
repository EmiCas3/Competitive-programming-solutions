#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n,q,l,r,res=0;
    cin >> n >> q;
    
    vector<int> a(n);
    vector<unsigned long long> p(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(i==0){
            p[i]=a[i];
        } else{
            p[i] = p[i-1] + a[i];
        }
    }
 
    for(int i=0; i<q; i++){
        cin>>l>>r;
        
        cout<<p[r-1]-p[l-1]+a[l-1]<<endl;
    }    
    return 0;
