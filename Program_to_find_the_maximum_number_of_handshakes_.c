#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    if(a==1){
        cout <<"Consists of 1 integer";
    }
    else{
        b=(a*(a-1))/2;
        cout << b;
        
    }
}