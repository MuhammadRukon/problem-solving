#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        l-=1;
        r-=1;
        int sum = 0;
  
       while(l<r){
        sum += (v[l]+v[r]);
        l++;
        r--;
       } 
       if(l==r){
        sum += v[l];
       }
       cout<<sum<<endl;
    }
    
    return 0;
}