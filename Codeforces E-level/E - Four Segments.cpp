#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        multiset<int> ms;
        for(int i=0;i<4;i++){
            int a;
            cin >> a;
            ms.insert(a);
        }
        int it = *ms.begin();
        auto it1 = ms.begin();
        it1++;
        it1++;
        int x=*it1;
        cout << x*it << endl;
    }
}
