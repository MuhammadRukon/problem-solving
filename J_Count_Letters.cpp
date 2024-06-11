#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    vector <int> v(26, 0);
    for(char c : s){
        int idx = c-97;
        v[idx]++;
    }
    for(int i=0; i<26; i++){
        if(v[i]){
            char c = i+97;
            cout<<c<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}