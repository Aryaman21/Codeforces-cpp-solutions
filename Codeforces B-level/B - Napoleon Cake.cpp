#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> vip;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        string s = "";
        int i=n-1,u=0;
        while(s.length()<n && i>=0){
            if(v[i]!=0){
                s+= "1";
                if(u>0){
                    int o = u;
                    u = max(v[i],o);
                    u--;
                    i--;
                }
                else{
                    u = v[i]-1;
                    i--;
                }
            }
            else{
                if(u<=0){
                    s+="0";
                    i--;
                }
                else{
                    s+="1";
                    u--;
                    i--;
                }
            }
        }
        for(int z=n-1;z>=0;z--){
            cout << s[z] << " ";
        }
        cout << endl;
    }
}

