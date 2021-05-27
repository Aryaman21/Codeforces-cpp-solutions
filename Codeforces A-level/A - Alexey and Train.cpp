#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<long double, long double> > v(n);
        for(int i=0;i<n;i++){
            int j,k;
            cin >> j >> k;
            v[i]={j,k};
        }
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long int tm = 0;
        for(int i=0;i<n;i++){
            long double z = (v[i].second - v[i].first)/2;
            long long int x = ceil(z);
            v[i].first += tm;
            v[i].first += arr[i];
            if(v[i].first + x > v[i].second){
                tm = (v[i].first + x - v[i].second);
            }
        }
        cout << (int)v[n-1].first << endl;
    }
}

