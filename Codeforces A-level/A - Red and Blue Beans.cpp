#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r,b,d;
        cin >> r >> b >> d;
        double a = (double)abs(r-b)/(double)(min(r,b));
        if(ceil(a)<=d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

