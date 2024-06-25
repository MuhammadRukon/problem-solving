#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int maxIdx = n-1;
    int minIdx = 0;
    for(int i=0; i<n; i++){
        if(v[i]>v[maxIdx]){
            maxIdx = i;
        }   
    }
    for(int i=maxIdx; i<=0; i--){
        
    }

    for(int i=0; i<n; i++){
          if(v[i]<= v[minIdx]){
            minIdx = i;
        }
        
    }

    return 0;
}