#include <iostream>
#include <vector>
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
bool nodePath(Node *root, vector<int> &array, int value)
{
    if (root == NULL)
    {
        return false;
    }
    array.push_back(root->data);
    if (root->data == value)
    {
        return true;
    }
    if (nodePath(root->left, array, value) || nodePath(root->right, array, value))
    {
        return true;
    }
    array.pop_back();
    return false;
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
    vector<int> array;
    nodePath(temp, array, 7);
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}