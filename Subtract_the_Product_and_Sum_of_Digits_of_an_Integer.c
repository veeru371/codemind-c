#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,s=0,c=1;
    cin >>a;
    while(a!=0){
        t=a%10;
        a=a/10;
        s+=t;
        c=c*t;
    }
    cout << c-s;
}