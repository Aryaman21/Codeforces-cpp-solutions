#include<bits/stdc++.h>
using namespace std;

int term[101];

int solve(int n){
    if(n==1){
        return 1;
    }
    else{
        term[n] = solve(n-1) + (4*(n-2)) + 4;
        return term[n];
    }
}

int main(){
    int n;
    cin >> n;
    cout << solve(n) << endl;
}
