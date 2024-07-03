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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
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

void print_LS(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void delete_pos(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    if (pos == 0 && head != NULL)
    {

        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    if (temp->next->next != NULL)
    {
        temp->next = temp->next->next;
    }
    else
    {
        temp->next = NULL;
        tail = temp;
    }
    delete delete_node;
}
int main()
{

    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    while (t--)
    {
        int val;
        int option;
        cin >> option >> val;
        if (option == 0)
        {
            insert_head(head, tail, val);
            print_LS(head);
            cout << endl;
        }
        if (option == 1)
        {
            if (size_of_ls(head) < 1)
            {
                insert_head(head, tail, val);
            }
            else
            {

                insert_tail(head, tail, val);
            }
            print_LS(head);
            cout << endl;
        }
        if (option == 2)
        {
            int pos = val;
            if (size_of_ls(head) > pos)
            {
                delete_pos(head, tail, pos);
            }

            print_LS(head);
            cout << endl;
        }
    }

    return 0;
}
