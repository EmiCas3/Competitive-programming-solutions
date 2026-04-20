#include <iostream>
using namespace std;
 
int main() {
	long long n,q,a,b,s=0;
    cin>>n>>q;
    long long arr[n];
    for (long long i=0; i<n; i++){
        cin>>arr[i];
    }
    long long pref[n];
    pref[0]=arr[0];
    for (long long i=1; i<n; i++){
        pref[i]=pref[i-1]+arr[i];
    }
    for (long long i=0; i<q; i++){
        cin>>a>>b;
        s=pref[b-1]-pref[a-1]+arr[a-1];
        cout<<s<<endl;
    }
    return 0;
}
