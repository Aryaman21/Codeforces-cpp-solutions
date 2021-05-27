#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string x="1";
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                s[i]='2';
            }
            else{
                s[i]='1';
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i+1]==s[i]){
                x+='0';
                if(s[i+1]=='1'){
                    s[i+1]='0';
                }
                else{
                    s[i+1]='1';
                }
            }
            else{
                x+='1';
            }
        }
        cout << x <<endl;
    }
}
