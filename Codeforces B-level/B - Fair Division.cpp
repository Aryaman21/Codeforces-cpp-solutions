#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,su=0,fu=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==1){
                su++;
            }
            else{
                fu++;
            }
        }
        if(su%2==0 && su!=0){
            cout << "YES" << endl;
        }
        else if(su==0 && fu%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
