#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,m,k;
        cin >> n >> m >> k;
        long long int r,c;
        if(n==1 || m==1){
            cout << k << endl;
        }
        else{
            if(k%n==0){
            c = k/n;
            r = n-1;
        }
        else{
            c = k/n + 1;
            r = k%n - 1;
        }
        cout << r*m + c <<endl;
        }
    }
}
