#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
int get_index(Node *head, int x)
{

    int index=0;
    while (head != NULL)
    {
        if(head->val == x){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head, tail, val);
    }
    int x;
    cin>>x;
    cout << get_index(head,x) << endl;
    }
    return 0;
}
