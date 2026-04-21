// https://cses.fi/problemset/task/1071/

#include <iostream>
using namespace std;
 
int main() {
	long long n,y,x,ni,res=0;
    cin>>n;
 
    for(int i=0; i<n; i++){
        cin>>y>>x;
        
        if(x>y){
            if(x%2==1){
                ni=x*x;
                res=ni-(y-1);
            }
            else{
                ni=((x-1)*(x-1))+1;
                res=ni+(y-1);
            }
        }
        else if(y>=x){
            if(y%2==0){
                ni=y*y;
                res=ni-(x-1);
            }
            else{
                ni=((y-1)*(y-1))+1;
                res=ni+(x-1);
            }
        }
 
        cout<<res<<endl;
    }
    return 0;
}