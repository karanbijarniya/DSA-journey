#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
       int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       } 
       sort(a.begin(),a.end());
       int k=0;
       int c=0;
       while(k++<n)
       {
        if(a[k]!=a[n-1-k]) c++;
       }
       cout<<c/2<<"\n";
    }
}