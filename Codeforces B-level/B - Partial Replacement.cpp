#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<char> v(n);
        int l=n,r=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]=='*'){
                r = i;
                if(l>i){
                    l = i;
                }
            }
        }
        if(l==r){
            cout << "1" << endl;
        }
        else{
            int j=l,x=2;
            while(j<r){
                if(j+k<n && v[j+k]=='*'){
                    x++;
                    j = j+k;
                }
                else{
                    int u = j+k-1;
                    while(u>j){
                        if(v[u]=='*'){
                            x++;
                            j = u;
                            break;
                        }
                        else{
                            u--;
                        }
                    }
                }
            }
            cout << x-1 << endl;
        }
    }
}
