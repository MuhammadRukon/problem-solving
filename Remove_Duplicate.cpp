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

void print_LS(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void unique_LS(Node *&head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *current = temp;

        while (current->next != NULL)
        {
            if (temp->val == current->next->val)
            {
                Node *delete_node = current->next;
                current->next = current->next->next;
                delete delete_node;
            }
            else
            {
                current = current->next;
            }
        }
        temp = temp->next;
    }
}
int main()
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
    unique_LS(head);
    print_LS(head);
    return 0;
}
