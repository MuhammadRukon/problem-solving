#include <bits/stdc++.h>
using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// int size(Node *head)
// {
//     int count = 0;
//     while (head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }
// void insert_at_tail(Node *&head, Node *&tail, int val)
// {

//     Node *new_node = new Node(val);
//     if (head == NULL)
//     {
//         head = new_node;
//         tail = new_node;
//         return;
//     }
//     tail->next = new_node;
//     tail->next->prev = tail;
//     tail = new_node;
// }

// void insert_at_head(Node *&head, Node *&tail, int val)
// {

//     Node *new_node = new Node(val);
//     if (head == NULL)
//     {
//         head = new_node;
//         tail = new_node;
//         return;
//     }
//     head->prev = new_node;
//     head->prev->next = head;
//     head = new_node;
// }

// void print_ls(Node *head, Node *tail)
// {
//     cout << "L -> ";
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl
//          << "L -> ";
//     while (tail != NULL)
//     {
//         cout << tail->val << " ";
//         tail = tail->prev;
//     }
//     cout << endl;
// }

// void delete_at_position(Node *&head, Node *&tail, int pos)
// {
//     if (pos == 0)
//     {
//         Node *new_head = head->next;
//         delete head;
//         head = new_head;
//         if (head == NULL)
//         {
//             tail = NULL;
//         }
//         else
//         {
//             head->prev = NULL;
//         }
//     }
//     else if (pos == size(head) - 1)
//     {
//         Node *new_tail = tail->prev;
//         delete tail;
//         tail = new_tail;
//         tail->next = NULL;
//     }
//     else
//     {
//         Node *temp = head;
//         pos--;
//         while (pos--)
//         {
//             temp = temp->next;
//         }
//         Node * delete_node = temp->next;
//         temp->next = delete_node->next;
//         delete_node->next->prev = delete_node->prev;
//         delete delete_node;
//     }
// }
void print_reverse(auto begin, auto end) {
    if (begin == end) {
        return;
    }
    print_reverse(next(begin, 1), end);
    cout << *begin << " ";
}
int main()
{
    int q;
    cin >> q;
    list<int>ls;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int length = ls.size();
        if (x == 0)
        {
            // insert_at_head(head, tail, v);
            ls.push_front(v);
            cout<<"L -> ";
            for(int i : ls){
                cout<<i<<" ";
            }
            cout <<endl;
            cout<<"R -> ";
            print_reverse(ls.begin(), ls.end());
            cout <<endl;
           
        }
        else if (x == 1)
        {
            // insert_at_tail(head, tail, v);
            ls.push_back( v);
            cout<<"L -> ";
            for(int i : ls){
                cout<<i<<" ";
            }
            cout <<endl;
            cout<<"R -> ";
            print_reverse(ls.begin(), ls.end());
            cout <<endl;
        }
        else if (x == 2)
        {
            if (v >= length)
            {
               cout<<"L -> ";
            for(int i : ls){
                cout<<i<<" ";
            }
            cout <<endl;
            cout<<"R -> ";
            print_reverse(ls.begin(), ls.end());
            cout <<endl;
            }
            else
            {
                // delete_at_position(head, tail, v);
                ls.erase(next(ls.begin(), v));
                cout<<"L -> ";
            for(int i : ls){
                cout<<i<<" ";
            }
            cout <<endl;
            cout<<"R -> ";
            print_reverse(ls.begin(), ls.end());
            cout <<endl;
            }
        }
    }
    return 0;
}
