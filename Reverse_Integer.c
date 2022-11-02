#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,s=0,d;
    cin >> a;
    d=a;
    if(a<0){
        a=a*(-1);
    }
    while (a!=0){
        t=a%10;
        a=a/10;
        s=(s*10)+t;
    }
    if(d<0){
        s=s*(-1);
        cout << s;
    }
    else{
        cout <<s;
    }
}