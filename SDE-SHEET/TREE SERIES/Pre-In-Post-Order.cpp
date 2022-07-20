#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct Node
{
    Node *left;
    int data;
    Node *right;
};
Node *create(int data)
{
    Node *root = new (Node);
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
};
vector<int> pre;
vector<int> in;
vector<int> po;
stack<pair<Node *, int> > s;
void preinpo(Node *root)
{
    pair<Node *, int> p;
    p.first = root;
    p.second = 1;
    s.push(p);
    while (!s.empty())
    {
        pair<Node *, int> topmost;
        topmost = s.top();
        s.pop();
        if (topmost.second == 1)
        {
            Node *temp = topmost.first;
            pre.push_back(topmost.first->data);
            topmost.second++;
            s.push(topmost);
            if (temp->left)
            {
                pair<Node *, int> pushit;
                pushit.first = temp->left;
                pushit.second = 1;
                s.push(pushit);
            }
        }
        else if (topmost.second == 2)
        {
            Node *temp = topmost.first;
            in.push_back(topmost.first->data);
            topmost.second++;
            s.push(topmost);
            if (temp->right)
            {
                pair<Node *, int> pushit;
                pushit.first = temp->right;
                pushit.second = 1;
                s.push(pushit);
            }
        }
        else
        {
            Node *temp = topmost.first;
            po.push_back(topmost.first->data);
        }
    }
}
int main()
{
    Node *root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right->left = create(6);
    root->right->right = create(7);
    preinpo(root);
    cout << "Post Order" << endl;
    for (auto it : po)
    {
        cout << it << " ";
    }
    cout << "\nPre Order" << endl;
    for (auto it : pre)
    {
        cout << it << " ";
    }
    cout << "\nIn Order" << endl;
    for (auto it : in)
    {
        cout << it << " ";
    }
    return 0;
}