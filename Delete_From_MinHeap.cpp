#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
            break;
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left = 2 * cur + 1;
        int right = 2 * cur + 2;
        int lastIdx = v.size() - 1;
        if (left <= lastIdx && right <= lastIdx)
        {
            if (v[left] <= v[right] && v[left] < v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else if (v[right] <= v[left] && v[right] < v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
                break;
        }
        else if (left <= lastIdx)
        {
            if (v[left] < v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }else{
                break;
            }
        }
        else if (right <= lastIdx)
        {
            if (v[right] < v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else{
                break;
            }
        }
        else
            break;
    }
}
void print_heap(vector<int> &v){
    for(int value: v){
        cout<<value<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    print_heap(v);
    return 0;
}