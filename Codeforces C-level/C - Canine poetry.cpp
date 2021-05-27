#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i=1,x=0;
        while(i<s.size()){
            if(s[i]==s[i-1]){
                s[i] = '1';
                x+=1;
            }
            if(i-2>=0 && s[i]==s[i-2] && s[i]!='1'){
                s[i]='1';
                x+=1;
                i++;
            }
            else{
                i++;
            }
        }
        cout << x << endl;
    }
}
