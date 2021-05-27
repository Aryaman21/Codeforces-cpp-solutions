#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,T=0,M=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                T++;
            }
            else{
                M++;
            }
        }
        int at[T],am[M],k=0,j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                at[k] = i;
                k++;
            }
            else{
                am[j] = i;
                j++;
            }
        }
        int l=0,u=0;
        if(T!=(2*M)){
            cout << "NO\n";
        }
        else{
            for(int i=0;i<T/2;i++){
                if(am[l]>at[i] && am[l]<at[i+T/2]){
                    l++;
                }
                else{
                    break;
                }
            }
            if(l==M){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}
