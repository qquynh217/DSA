#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
struct Node
{
    int data;
    struct Node *next;
};
Node *createNode(int val)
{
    Node *temp;
    temp = new Node();
    temp->next = NULL;
    temp->data = val;
    return temp;
}
Node *addHead(Node *head, int val)
{
    Node *temp = createNode(val);
    if (head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}
int main()
{
    Node *head, *temp;
    for (int i = 1; i <= 15; i++)
    {
        head->data = i;
        head->next = temp;
    }
}