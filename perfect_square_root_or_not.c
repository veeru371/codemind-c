#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int a,t,w;
    cin >> a;
    t=int(sqrt(a));
    w=(t*t);
    if(w==a){
        cout << "True";
    }
    else{
        cout << "False";
    }
    
}