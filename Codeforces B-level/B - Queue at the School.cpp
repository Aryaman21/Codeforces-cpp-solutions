#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string l;
    cin >> l;
    while(m--){
        for(int i=0;i<n-1;i++){
            if(l[i]=='B' && l[i+1]=='G'){
                l[i] = 'G';
                l[i+1] = 'B';
                i++;
            }
        }
    }
    cout << l;
}
