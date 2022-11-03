#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,r=0;
    cin >> a;
    while(a!=0){
        t=a%10;
        a=a/10;
        if(t>r){
            r=t;
        }
    }
    cout << r;
}