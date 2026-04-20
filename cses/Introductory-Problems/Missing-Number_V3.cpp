#include <iostream>
using namespace std;
 
int main(){
 
    int n,m, sum = 0, sum2 = 0;
    cin >> n;
 
    for(int i = 1; i <= n; i++){
        sum += i;
    }
 
    for(int i = 0 ; i < (n-1) ; i++){
        cin>> m;
        sum2 += m;
    }
 
    printf("%d",(sum - sum2));
 
    
    return 0;
}