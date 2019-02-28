
#include<iostream>

using namespace std;

typedef struct TreeNode{

    int data;
    TreeNode *left;
    TreeNode *right;
} treeNode;

treeNode *root = NULL:

treeNode *newNode(void)
{
    treeNode *newNode = new (treeNode);
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

int getData()
{
    int data;
    cin >> data;
    return data;
}

treeNode *getNewNode(void data)
{
    treeNode *curr = newNode();
    curr -> data = getData();
    return curr;
}

treeNode *minValueNode(treeNode *root)
{
    while(root -> left != NULL)
    {
        root = root -> left;
    }
    return root;
}


treeNode *Delete(treeNode *root, int data)
{
    if(root == NULL)
        return root;
    else if(data > root -> data)
        root -> right = Delete(root > right, data);
    else if(data < root)
        root -> left = Delete(root -> left, data)

    else{

        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            root = NULL;
            return root;
        }

        else if(root -> left == NULL)
        {
           treeNode *temp = root;
           root = root -> right;
           delete temp;
           return root;
        }

        else if(root -> right == NULL)
        {
            treeNode *temp = root;
            root = root -> left;
            delete temp;
            return root;
        }

        else
        {
            treeNode *temp = minValueNode(root -> right);
            root -> data = temp ->data;
            root -> right = Delete(root -> right, temp -> data);
            return root;

        }

    }

}

int main()
{

}
