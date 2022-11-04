#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >>a;
    for(int i=1;i<=a;i++){
        int b,t,r;
        cin >>b;
        t=int(pow(b,0.5));
        r=(t*t);
        if(r==b){
            cout << "True" <<"
";
        }
        else{
            cout << "False"<<"
";
        }
    }
}