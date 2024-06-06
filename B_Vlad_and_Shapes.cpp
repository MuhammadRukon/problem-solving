#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    int n;
    int k = 0;
    cin >> n;
    string s[n];
    for (int j = 0; j < n; j++)
    {
        cin >> s[j];
    }

    int triangle = 0;
    int sums[n]= {0};

    for (int j = 0; j < n; j++)
    {
      int one_count = 0; 
        for(int digit : s[j]){        
              one_count += (digit-48);                                   
        }  
         if (one_count){      
           sums[k] = one_count;
           k++; 
        }  

        if(k==2){
            if(sums[0] != sums[1]){
                triangle=1;
                break;
            } 
        }         
    }    
            
    if (triangle)
    {
        cout << "TRIANGLE";
    }
    else
    {
        cout << "SQUARE";
    }
    cout<<endl;
    }

    return 0;
}
