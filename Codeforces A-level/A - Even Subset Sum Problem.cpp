#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(n==1 && v[0]%2!=0){
            cout << "-1" << endl;
            continue;
        }
        int k = INT_MAX,sum=0,l=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                k = i;
                break;
            }
            else{
                sum+=v[i];
                if(sum%2==0){
                    l = i;
                    break;
                }
            }
        }
        if(l==0){
            cout << "1" << endl;
            cout << k+1 <<endl;
        }
        else{
            cout << l+1 <<endl;
            for(int i=0;i<l+1;i++){
                cout << i+1 << " ";
            }
            cout << endl;
        }
    }
}
