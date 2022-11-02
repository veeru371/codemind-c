#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i=1;i<=a;i++){
        int b,s=0,t,n;
        cin >> b;
        n=b;
        while (b!=0){
            t=b%10;
            b=b/10;
            s=(s*10)+t;
        }
        if(s==n){
            cout << "True"<<"
";
        }
        else{
            cout << "False"<<"
";
        }
        
    }
}