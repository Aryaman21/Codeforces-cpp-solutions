#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        for(int i=n;i<=m;i++){
            if(2*i<=m){
                cout << i << " " << 2*i << endl;
                break;
            }
            else{
                cout << "-1 -1" << endl;
                break;
            }
        }
    }
}
