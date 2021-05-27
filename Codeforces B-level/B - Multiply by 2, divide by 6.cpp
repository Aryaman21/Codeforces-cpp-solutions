#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i=0;
        cin >> n;
        while(n!=1 && n!=-1){
            if(n%6==0){
                n/=6;
                i++;
            }
            else if(n%6!=0 && n%3==0){
                n*=2;
                i++;
            }
            else{
                n=-1;
            }
        }
        if(n!=-1){
            cout << i << endl;
        }
        else{
            cout << n << endl;
        }
    }
}

