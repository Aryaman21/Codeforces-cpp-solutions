#include<bits/stdc++.h>
using namespace std;


int term[100];

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        term[n] = n*factorial(n-1);
        return term[n];
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << factorial(min(n,m)) << endl;

}

