#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >>a>>b;
    if(b>a){
        c=b;
        b=a;
        a=c;
    }
    for (int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            d=i;
        }
    }
    cout << d;
    
}