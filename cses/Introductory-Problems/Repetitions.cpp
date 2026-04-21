// https://cses.fi/problemset/task/1069/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    long long t,i=0,cg=0,A=0,C=0,G=0,T=0;
    char ca;
	string cadena;
 
    cin>>cadena;
    ca=cadena[0];
    t=cadena.length();
    
   
 
  while(i<t){
        
        if(ca!=cadena[i]){
            if(cadena[i]=='A'){
                ca=cadena[i];
            }
            if(cadena[i]=='C'){
                ca=cadena[i];
            }
            if(cadena[i]=='G'){
                ca=cadena[i];
            }
            if(cadena[i]=='T'){
                ca=cadena[i];
            }
 
            cg=0;
        }
 
        if(ca==cadena[i]){
            if(cadena[i]=='A'){
                cg++;
                if(cg>A){
                    A=cg;
                }
            }
 
            if(cadena[i]=='C'){
                cg++;
                if(cg>C){
                    C=cg;
                }
            }
 
            if(cadena[i]=='G'){
                cg++;
                if(cg>G){
                    G=cg;
                }
            }
 
            if(cadena[i]=='T'){
                cg++;
                if(cg>T){
                    T=cg;
                }
            }
        }
       i++;
    }
 
    vector<long long> vec;
    vec.push_back(A);
    vec.push_back(C);
    vec.push_back(G);
    vec.push_back(T);
    sort(vec.begin(), vec.end());
    cout<<vec[3];
 
    return 0;  
}