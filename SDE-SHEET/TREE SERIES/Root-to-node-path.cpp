#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void nodePath(Node *root, string path, int value)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == value)
    {
        path = path + to_string(root->data);
        cout << path << endl;
        return;
    }
    path = path + to_string(root->data);
    nodePath(root->left, path + "->", value);
    nodePath(root->right, path + "->", value);
}
int main()
{
    Node *temp = new Node(1);
    temp->left = new Node(2);
    temp->right = new Node(3);
    temp->left->left = new Node(5);
    temp->left->right = new Node(4);
    temp->left->right->left = new Node(6);
    temp->left->right->right = new Node(7);
    string s = "";
    int value = 9;
    nodePath(temp, s, value);
    return 0;
}