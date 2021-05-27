#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    string x = s;
    reverse(s.begin(),s.end());
    if(x==s){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string g = s+"a";
        string h = "a"+s;
        if(palindrome(g)==true){
            if(palindrome(h)==true){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
                cout << h << endl;
            }
        }
        else{
                cout << "YES" << endl;
                cout << g << endl;
        }
    }
}
