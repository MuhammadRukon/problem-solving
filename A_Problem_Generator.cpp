#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        int arr[7]={0};

   int n,m;
   cin >> n >> m;
   string a;
   cin>> a;
   int size = a.size();
   int problems = 0;

for(int i = 0; i<size; i++){
     arr[a[i]-'A']++;
}

for(int i= 0; i<7; i++){
     int problems = 0;
    if(arr[i] < m){
        problems+=(m-arr[i]);
    }
    char c = i+65;
    cout<<c<<":"<<problems<<endl;
}
//    cout<< problems<<endl;
   cout<<endl;
    }

   return 0;
}

