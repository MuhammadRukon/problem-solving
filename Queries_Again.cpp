#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail->next->prev = tail;
    tail = new_node;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    head->prev = new_node;
    head->prev->next = head;
    head = new_node;
}

void print_ls(Node *head, Node *tail)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl
         << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

void insert_at_position(Node *&head, Node *&tail, int value, int pos)
{
    Node *new_node = new Node(value);
    Node *temp = head;
    pos--;
    while (pos--)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    new_node->next->prev = new_node;
    new_node->prev = temp;
    temp->next = new_node;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    int length = 0;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_ls(head, tail);
        }
        else if (x == length)
        {

            insert_at_tail(head, tail, v);
            print_ls(head, tail);
        }
        else if (x > length)
        {
            cout << "Invalid" << endl;
        }
        else if (x > 0 && x < length)
        {
            insert_at_position(head, tail, v, x);
            print_ls(head, tail);
        }
        length = size(head);
    }
    return 0;
}
