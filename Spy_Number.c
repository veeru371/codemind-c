#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,s=1,c=0;
    cin >> a;
    while (a!=0){
        t=a%10;
        a=a/10;
        s*=t;
        c+=t;
    }
    if(s==c){
        cout << "Spy Number";
    }
    else{
        cout << "Not Spy Number";
    }
    
}