#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,r=0;
    cin >> a;
    b=a*a;
    while (b!=0){
        t=b%10;
        b=b/10;
        r+=t;
    }
    if(r==a){
        cout << "Neon Number";
    }
    else{
        cout << "Not Neon Number";
    }
    
}