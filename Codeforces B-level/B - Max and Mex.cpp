#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long int k,z=1;
        cin >> n >> k;
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        if(k>0){
            long long int mex=0;
            for(int i=0;i<n;i++){
                if(v[i]==mex){
                    mex=v[i]+1;
                }
                else{
                    break;
                }
            }
            long long int x = (mex+v[n-1])/2 + ((mex+v[n-1])%2 != 0);
            if(x==mex){
                for(int i=0;i<n;i++){
                    if(i>0 && v[i]!=v[i-1]){
                        z++;
                    }
                }
                cout << z+k << endl;
            }
            else{
                v.push_back(x);
                sort(v.begin(),v.end());
                for(int i=0;i<n+1;i++){
                    if(i>0 && v[i]!=v[i-1]){
                        z++;
                    }
                }
                cout << z << endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                    if(i>0 && v[i]!=v[i-1]){
                        z++;
                    }
                }
                cout << z+k << endl;
        }

    }
}

