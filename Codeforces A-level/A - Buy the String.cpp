#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,h;
        string s;
        cin >> n >> a >> b >> h >> s;
        vector<int> v;
        v.push_back((count(s.begin(),s.end(),'0')*a)+(count(s.begin(),s.end(),'1')*b));
        v.push_back((n*a)+(count(s.begin(),s.end(),'1')*h));
        v.push_back((n*b)+(count(s.begin(),s.end(),'0')*h));
        cout << *min_element(v.begin(),v.end()) << endl;

    }
}
