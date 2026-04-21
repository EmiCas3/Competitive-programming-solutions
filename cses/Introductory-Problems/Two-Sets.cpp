// https://cses.fi/problemset/task/1092

#include <iostream>
using namespace std;
 
int main() {
	int n,st=0, m, L, R;
    cin>>n;
    st=(n*(n+1))/2;
 
    if(st%2==0){ //suma es par 
        cout<<"YES"<<endl;
        
        if(n%2!=0){ // n es impar
            m=(n-1)/2; // m de mitad 
            L=1; R=n;
            cout<<m<<endl;
            bool bandi=false;
            for(int i=1; i<=n; i++){
                if(i<=m){
                    if(i%2!=0){ 
                        cout<<R<<" ";
                        R--;
                    }
                    else{
                        cout<<L<<" ";
                        L++;
                    }
                }
                else{
                    if(bandi==false){
                        cout<<endl<<m+1<<endl;
                        bandi=true;
                    }
                    if(R>=L){
                        cout<<R<<" ";
                        R--;
                    }
                }
            }
        }
        else{// n es par
            m=n/2;
            L=1; R=n;
            cout<<m<<endl;
             bool bandi=false;
            for(int i=1; i<=n; i++){
                if(i<=m){
                    if(i%2!=0){ 
                        cout<<R<<" ";
                        R--;
                    }
                    else{
                        cout<<L<<" ";
                        L++;
                    }
                }
                else{
                    if(bandi==false){
                        cout<<endl<<m<<endl;
                        bandi=true;
                    }
                    if(R>=L){
                        cout<<R<<" ";
                        R--;
                    }
                }
            }
        }
    }
    
    else{
        cout<<"NO";
    }
 
    return 0;
}