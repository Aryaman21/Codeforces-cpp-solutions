#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n,x;
        cin >> n >> x;
        if(n<=2){
            cout << "1" << endl;
        }
        else{
            double y = (n-2)/x;
            cout << 1+ceil(y) << endl;
        }
    }
}
