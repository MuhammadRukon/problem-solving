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

void insert_at_tail(Node *&head, int v)
{
    Node *new_node = new Node(v);
    if (head == NULL)
    {
        head = new_node;
        cout<< "Inserted head" <<endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    cout<< "Inserted at tail" <<endl;
}

void print_linked_list(Node *head)
{
    cout << "your linked list: " << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *&head, int pos, int v)
{
    Node *new_node = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void insert_at_head(Node* &head, int v){
    Node * new_node = new Node(v);
    new_node->next = head;
    head = new_node;
    cout<< "Insert at head" <<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "please enter value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        if (op == 2)
        {
            print_linked_list(head);
        }
        if (op == 3)
        {
            int pos, v;
            cout << "enter position: " << endl;
            cin >> pos;
            cout << "enter value: " << endl;
            cin >> v;
            insert_at_position(head, pos, v);
        }
        if (op == 4)
        {
            int v;
            cout << "enter value: " << endl;
            cin>>v;
            insert_at_head(head, v);
        }
        if(op == 5){
            break;
        }
    }
    return 0;
}