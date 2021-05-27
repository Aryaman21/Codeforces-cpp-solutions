#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> v1(t);
    vector<int> v2(t);
    for(int i=0;i<t;i++){
        v1[i] = (int)s1[i];
        v2[i] = (int)s2[i];
    }
    int su = 0;
    for(int i=0;i<t;i++){
        if(v1[i]>=v2[i]){
            su+=min(abs((10+v2[i])-v1[i]),abs(v1[i]-v2[i]));
        }
        else{
            su+=min(abs((10+v1[i])-v2[i]),abs(v2[i]-v1[i]));
        }
    }
    cout << su << endl;
}
