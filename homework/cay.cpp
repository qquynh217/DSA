#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
struct Tree
{
    int data;
    Tree *left, *right;
};
Tree *createNode(int val)
{
    Tree *temp;
    temp = new Tree();
    temp->left = NULL;
    temp->right = NULL;
    temp->data = val;
    return temp;
}
void NLR(Tree *root)
{
    if (root != NULL)
    {
        cout << root->data << ' ';
        NLR(root->left);
        NLR(root->right);
    }
}
void LNR(Tree *root)
{
    if (root != NULL)
    {
        LNR(root->left);
        cout << root->data << ' ';
        LNR(root->right);
    }
}
void LRN(Tree *root)
{
    if (root)
    {
        LRN(root->left);
        LRN(root->right);
        cout << root->data << ' ';
    }
}
int main()
{
    Tree *root = createNode(9);
    Tree *node1 = createNode(2);
    Tree *node2 = createNode(8);
    Tree *node3 = createNode(6);
    Tree *node4 = createNode(1);
    Tree *node5 = createNode(5);
    Tree *node6 = createNode(7);
    Tree *node7 = createNode(10);
    Tree *node8 = createNode(3);
    Tree *node9 = createNode(12);
    Tree *node10 = createNode(4);
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right = node6;
    node4->left = node7;
    node5->left = node8;
    node6->left = node9;
    node6->right = node10;
    cout << "LRN: ";
    LRN(root);
    cout << "\nLNR: ";
    LNR(root);
    cout << "\nNRL: ";
    NLR(root);
}