class Solution {
public:
    bool isLeaf(Node *root)
    {
        if(root->left == NULL && root->right == NULL)
        {
            return true;
        }
        return false;
    }
    void addLeftBoundary(Node *root,vector<int> &result)
    {
        Node * curr = root->left;
        while(curr)
        {
            if(!isLeaf(curr))
            {
                result.push_back(curr->data);
            }
            if(curr->left != NULL)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
    }
    void addLeafNodes(Node *root,vector<int> &result)
    {
        if(isLeaf(root))
        {
            result.push_back(root->data);
            return;
        }
        if(root->left)
            addLeafNodes(root->left,result);
        if(root->right)
            addLeafNodes(root->right,result);
    }
    void addRightBoundary(Node *root,vector<int> &result)
    {
        Node * curr = root->right;
        stack<int> s;
        while(curr)
        {
            if(!isLeaf(curr))
            {
                s.push(curr->data);
            }
            if(curr->right)
            {
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }
        while(!s.empty())
        {
            int value = s.top();
            result.push_back(value);
            s.pop();
        }
    }
    vector <int> boundary(Node *root)
    {
        vector<int> result;
        if(!root) return result;
        if(!isLeaf(root)) result.push_back(root->data);
        addLeftBoundary(root,result);
        addLeafNodes(root,result);
        addRightBoundary(root,result);
        return result;
    }
};