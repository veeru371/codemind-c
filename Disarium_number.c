#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,r,i=1,p,cnt=0;
    cin >>a;
    b=a;
    while(a!=0){
        t=a%10;
        a=a/10;
        r=(r*10)+t;
    }
    while(r!=0){
        p=r%10;
        r=r/10;
        cnt+=pow(p,i);
        i+=1;
    }
    if(cnt==b){
        cout << "True";
    }
    else{
        cout << "False";
    }
    
}