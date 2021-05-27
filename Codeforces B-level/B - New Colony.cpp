#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int m;
        int n;
        cin >> n >> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int c;
            cin >> c;
            v.push_back(c);
        }
        long long int j=0;
        int a=-1;
        while(j<m){
            a=-1;
            for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                v[i]++;
                a=i+1;
                break;
            }
        }
        if(a==-1){
            break;
        }
        j++;
        }
        cout << a << endl;
    }
}

