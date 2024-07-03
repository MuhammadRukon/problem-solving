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

int size_of_ls(Node *head)
{
    int size = 0;
    while (head != NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}

bool comparison(Node *head, Node *head2)
{
    while (head != NULL)
    {
        if (head->val != head2->val)
        {
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return true;
}
int main()
{

    int val;
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head2, tail2, val);
    }

    if (size_of_ls(head) != size_of_ls(head2))
    {
        cout << "NO" << endl;
    }
    else
    {
        comparison(head, head2) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
