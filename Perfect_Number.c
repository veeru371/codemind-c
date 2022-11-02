#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int s=0;
    cin >>a;
    for(int i=1;i<a;i++){
        if(a%i==0){
            s+=i;
        }
    }
    if(s==a){
        cout << "True";
    }
    else{
        cout << "False";
    }
}