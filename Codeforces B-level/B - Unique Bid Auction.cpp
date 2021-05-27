#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        multiset<int> ms;
        for(int i=0;i<n;i++){
            cin >> v[i];
            ms.insert(v[i]);
            s.insert(v[i]);
        }
        int m=0;
        for(auto itr=s.begin();itr!=s.end();itr++){
            if(ms.count(*itr)==1){
                m = *itr;
                break;
            }
        }
        if(m==0){
            cout << "-1" << endl;
        }
        else{
            for(int i=0;i<n;i++){
            if(v[i]==m){
                cout << i+1 << endl;
                break;
            }
        }
        }
    }
}
