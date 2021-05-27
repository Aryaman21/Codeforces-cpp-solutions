#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,maxi1=0,maxi2=0,s=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            s+=a;
            if(maxi1<s){
                maxi1 = s;
            }
        }
        s=0;
        cin >> m;
        for(int i=0;i<m;i++){
            int a;
            cin >> a;
            s+=a;
            if(maxi2<s){
                maxi2 = s;
            }
        }
        cout << maxi1+maxi2 << endl;
    }
}
