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

void insert_at_position(Node *head, int pos, int val)
{
    Node *temp = head;
    Node *new_node = new Node(val);
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int linked_list_size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos = 5, val = 100;
    // cin>>pos>>val;
    if (pos > linked_list_size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    print_linked_list(head);
    return 0;
}