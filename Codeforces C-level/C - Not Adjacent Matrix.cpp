#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
        }
        else if(n==2){
            cout << -1 << endl;
        }
        else if(n>2 && n%2==1){
            int arr[n*n],k=1;
            for(int i=0;i<=(n*n)/2;i++){
                arr[i] = k;
                k+=2;
            }
            k = 2;
            for(int i=((n*n)/2)+1;i<n*n;i++){
                arr[i] = k;
                k+=2;
            }
            for(int i=0;i<n*n;i++){
                cout << arr[i] << " ";
                if((i+1)%n==0){
                    cout << "\n";
                }
            }
        }
        else if(n>2 && n%2==0){
            int arr[n*n],k=1;
            for(int i=0;i<(n*n)/2;i++){
                arr[i] = k;
                k+=2;
            }
            k = 2;
            for(int i=((n*n)/2);i<n*n;i++){
                arr[i] = k;
                k+=2;
            }
            for(int i=0;i<n*n;i++){
                cout << arr[i] << " ";
                if((i+1)%n==0){
                    cout << "\n";
                }
            }
        }
    }
}
