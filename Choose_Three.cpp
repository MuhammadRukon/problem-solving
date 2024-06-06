#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int l=0; l<x; l++){
        int n, target;
    cin >> n>> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag= 0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1;j<n-1; j++){
            for(int k=j+1;k<n; k++){
               if(arr[i]+arr[j]+arr[k] == target){
                flag = 1;
                break;
               }
            }
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
cout<<endl;
    }
    return 0;
}