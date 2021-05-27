#include<bits/stdc++.h>
using namespace std;

int main(){
    string x="";
    while(x!="a"){
        string y;
        cin >> y;
        if(y!=""){
            cout << "NO" << endl;
            x = y;
        }
        else{
            x = "a";
        }
    }
}
