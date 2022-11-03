#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,y;
    cin >>a>>b;
    for(int i=1;i<=b;i++){
        if(i%2!=0){
            y=(a*i);
            cout <<a<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<y <<"
";
        }
    }
}