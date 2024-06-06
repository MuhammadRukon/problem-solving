#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100001];
    while((cin.getline(str, 100001))){
     sort(str, str+strlen(str));
     int length = strlen(str);
   for(int i=0; i<length; i++){
    if(str[i] != ' '){
        cout<<str[i];
    }
   }
   cout<<endl;
    }
    return 0;
}
