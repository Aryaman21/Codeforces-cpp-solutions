#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.size()==0){
                st.push(s[i]);
            }
            else if(st.top()==s[i] || (st.top()==')'&&s[i]=='(')){
                st.push(s[i]);
            }
            else if(st.top()=='('&&s[i]==')'){
                st.pop();
            }
        }
        cout << st.size()/2 << endl;
    }
}

