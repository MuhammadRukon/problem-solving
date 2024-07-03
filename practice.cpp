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

// void reverse_ls(Node *&head, Node *cur)
// {
//     if (cur->next == NULL)
//     {
//         head = cur;
//         return;
//     }
//     reverse_ls(head, cur->next);
//     cur->next->next = cur;
//     cur->next = NULL;
// }

void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(0);
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            cout << "loop" << endl;
            break;
        }
    }

    // reverse_ls(head, head);

    // print_ls(head);

    return 0;
}