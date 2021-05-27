#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
         int a = s[i]-'0';
         v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin(); it!=v.end()-1;it++){
        cout << *(it) << "+";
    }
    cout << v.back();
}
