#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string f = "";
    cin >> s;
    if(count(s.begin(),s.end(),'0')!=count(s.begin(),s.end(),'1')){
        cout << "1\n" << s << endl;
    }
    else{
        int k=0;
        for(int i=0;i<s.size();i++){
            f+=s[i];
            if(count(f.begin(),f.end(),'0')!=count(f.begin(),f.end(),'1')){
                k = i;
                cout << "2\n" << f << " ";
                break;
            }
        }
        for(int i=k+1;i<s.size();i++){
            cout << s[i];
        }
        cout << endl;
    }

}
