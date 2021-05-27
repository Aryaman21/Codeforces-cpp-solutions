#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,w;
    long long int n;
    cin >> k >> n >> w;
    long long int y = (((w*(w+1))/2)*k) - n;
    if(y>=0){
     cout << y << endl;
    }
    else{
        cout << "0" << endl;
    }
}
