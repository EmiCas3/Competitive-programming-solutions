// https://cses.fi/problemset/task/1070

#include <iostream>
using namespace std;
 
int main() {
	int n,np=2,ni=1;
    bool bandera=false;
    cin>>n;
 
    if(n==1){
        cout<<1;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        while(true){
            if(bandera==false){ //imprimir par
                if(np<=n){
                    cout<<np<<" ";
                    np=np+2;
                }else{
                    bandera=true;
                }
            }
 
            if(bandera==true){ //imprimir impar
                if(ni<=n){
                    cout<<ni<<" ";
                    ni=ni+2;
                }else{
                    break;
                }
            }
        }
    }
 
    return 0;
}