#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector <int> v2(m);
    
    for(int i=0; i<m; i++){
        cin>>v2[i];
    }

    int x;
    cin>>x;
    v.insert(v.begin()+x, v2.begin(), v2.end());
    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}