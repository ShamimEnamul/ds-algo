#include<iostream>

using namespace std;

typedef struct TreeNode{

    int data;
    TreeNode *left;
    TreeNode *right;
} treeNode;

treeNode *root = NULL;

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

treeNode *getNewNode(int data)
{
    treeNode *curr = newNode();
    curr -> data = data;
    return curr;
}

treeNode* insertNode(treeNode *root, int data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
    }

    else if(data <= root->data)
    {
        root -> left = insertNode(root -> left, data);
    }

    else{
        root -> right = insertNode(root -> right, data);
    }

    return root;
}

// using pointer to pointer
/*
void InsertWthPtoP(treeNode* *rootPtr, int data) // ** for pointer to pointer
{
    if(*rootPtr == NULL)
    {
        *rootPtr = getNewNode(data);
    }

    else if(data <= (*rootPtr)->data)
    {
        rootPtr -> left = InsertWthPtoP(&(rootPtr -> left), data);
    }

    else{
        rootPtr -> right = InsertWthPtoP(rootPtr -> right, data);
    }


}
*/

void traverse(treeNode *root)
{
    if(root == NULL)
        return;
    else
        traverse(root -> left);
        cout << root -> data << "\t";
        traverse(root -> right);
}






int main()
{
    treeNode *root = NULL;

    //each time we need to update the root
    root = insertNode(root, 5);
    insertNode(root, 4);
    insertNode(root, 100);
    insertNode(root, 1);
    insertNode(root, 8);
    insertNode(root, 7);
    /*
    nsertWthPtoP(root, 5);
    nsertWthPtoP(root, 4);
    nsertWthPtoP(root, 100);
    nsertWthPtoP(root, 1);
    nsertWthPtoP(root, 8);
    nsertWthPtoP(root, 7);

    */
    traverse(root);

}
