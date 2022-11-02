#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,q;
    cin >> a;
    q=a;
    int t,c=0;
    while (a!=0){
        int s=1;
        t=a%10;
        for(int i=1;i<=t;i++){
            s*=i;
        }
        c+=s;
        a=a/10;
        
    }
    if (c==q) cout <<"The number "<<q<<" is a strong number";
    else cout<<"The number "<<q<<" is not a strong number";
    
    
}