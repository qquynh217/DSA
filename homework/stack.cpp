#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
typedef struct Node *Stack;
bool isEmpty(Stack s)
{
    return (s == NULL);
}
Node *createNode(int data)
{
    Node *p = new Node();
    if (p == NULL)
    {
        return NULL;
    }
    p->data = data;
    p->next = NULL;

    return p;
}
void push(Stack &s, int data)
{
    Node *ptr = createNode(data); // tao node moi
    if (isEmpty(s))
    {
        s = ptr;
    }
    else
    {
        ptr->next = s;
        s = ptr;
    }
}
int top(Stack s)
{
    if (!isEmpty(s))
    {
        return s->data;
    }
    else
    {
        cout << "Stack is empty!" << endl;
    }
}
int pop(Stack &s)
{
    if (!isEmpty(s))
    {
        int data = s->data;
        Node *x = s;
        s = s->next;
        delete (x); // giai phong bo nho
        return data;
    }
    else
    {
        cout << "Stack is empty!" << endl;
    }
}
void in(Stack s)
{
    while (!isEmpty(s))
    {
        int data = top(s);
        pop(s);
        cout << data << ' ';
    }
}
int main()
{
    Stack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        push(s, x);
    }
    cout << "TOP: " << top(s) << endl;
    pop(s);
    cout << "TOP: " << top(s) << endl;
    in(s);
    cout << endl;
    return 0;
}