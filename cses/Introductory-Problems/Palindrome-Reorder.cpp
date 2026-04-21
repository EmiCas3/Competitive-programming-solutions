// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s,izq="",med="",der="";
    cin>>s;
 
    vector<int> freq (26,0);
 
    for(auto c : s){
        freq[c-'A']++;
    }
    
    int contimpares=0;
 
    for(int i=0; i<26; i++){
        if(freq[i]%2!=0){
            contimpares++;
            if(contimpares>=2){
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        }
    }
 
    for(int i=0; i<26; i++){
        if(freq[i]%2==0){
            izq+=string(freq[i]/2, char('A'+i));
        } else{
            med+=string(freq[i],char('A'+i));
        }
    }
    der=izq;
    reverse(der.begin(), der.end());
 
    cout<<izq<<med<<der<<endl;
 
    
    return 0;
}
