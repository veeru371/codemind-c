#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,s=0;
    cin >> a;
    while (a!=0){
        t=a%10;
        a=a/10;
        s=(s*10)+t;
    }
    cout << s;
}