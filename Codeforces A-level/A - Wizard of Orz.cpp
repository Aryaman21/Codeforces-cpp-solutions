#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[12] = {0,1,2,3,4,5,6,7,8,9};
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << "9" << endl;
        }
        else if(n==2){
            cout << "98" << endl;
        }
        else if(n==3){
            cout << "989" << endl;
        }
        else{
            cout << "989";
            for(int i=0;i<n-3;i++){
            cout << arr[i%10];
        }
        }
        cout << endl;
    }
}
