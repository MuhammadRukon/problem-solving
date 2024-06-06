#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    line += " ";
    int size = line.size();
    string name;
    int i=0;
    int flag = 1;

    while(line[i] != ' ' || i < size-1){
       if(line[i] != ' '){
         name += line[i];
       }
        i++;
        if(line[i]== ' '){

            if(name == "Jessica"){
                cout<<"YES";
                flag = 0;
                break;
            }
            name = "";
        }
        
    }
    if(flag){
        cout<<"NO";
    }
    return 0;
}
