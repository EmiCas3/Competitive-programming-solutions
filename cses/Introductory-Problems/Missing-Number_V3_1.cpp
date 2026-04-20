// https://cses.fi/problemset/task/1083
#include <iostream>
using namespace std;

int main(){

    long long n,st=0,so=0;
    cin >> n;

    st=(n*(n+1))/2; //formula de la suma de los n primeros numeros naturales
    for (int i = 0; i < n-1; i++){
        long long m;
        cin >> m;
        so+=m; //suma de los numeros que se ingresan
    }
    cout << (st - so) << endl;
    return 0;
}