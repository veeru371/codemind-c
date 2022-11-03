#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,r=0,d;
    cin >> a;
    d=a;
    while(a!=0){
        t=a%10;
        a=a/10;
        r=(r*10)+t;
    }
    if(d==r){
        cout << "True";
    }
    else{
        cout << "False";
    }
}