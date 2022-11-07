#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >>a;
    vector<int> t;
    for (int i=1;i<=a;i++){
        int b;
        cin >> b;
        t.push_back(b);
    sort(t.begin(), t.end());
    }
    for (auto x : t){
        cout << x << " ";
  
    }
}