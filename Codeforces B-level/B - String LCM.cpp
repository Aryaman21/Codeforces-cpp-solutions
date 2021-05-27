#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){

       string n,m;
       cin>>n>>m;
       int k=1,a=1;
       string nn,mm;
       while(k!=n.length()+1){
           string s="";
           for(int i=0;i<k;i++){
               s+=n[i];
           }
           string ns="";
           for(int i=0;i<n.length()/k;i++){
               ns+=s;
           }
           if(ns==n){
               nn = s;
               break;
           }
           else{
               k++;
           }
       }

       while(a!=m.length()+1){
           string s="";
           for(int i=0;i<a;i++){
               s+=m[i];
           }
           string ns="";
           for(int i=0;i<m.length()/a;i++){
               ns+=s;
           }
           if(ns==m){
               mm = s;
               break;
           }
           else{
               a++;
           }
       }

       if(nn==mm){
           long long int c = lcm(n.length()/k,m.length()/a);
           string ns="";
           for(int i=0;i<c;i++){
               ns+=nn;
           }
           cout << ns << endl;
       }
       else{
           cout << "-1" << endl;
       }

    }
}
