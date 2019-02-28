/*Delete a imbalanced Binary Tree Using queue */

#include<iostream>
#include<stdlib.h>
#include<queue>

using namespace std;

typedef struct TreeNode{
    int data;
    TreeNode *right;
    TreeNode *left;

} treeNode;
//treeNode* root = NULL;

treeNode* newNode(int key)
{
    treeNode* temp = new(treeNode);
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
};

// For deleting the left most node from the imbalanced Binary Tree
void deleteDepestNode(treeNode* root, treeNode* del_Node)
{

    queue <treeNode*> q;
    q.push(root);
    treeNode* temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp -> right)
        {
            if(temp -> right == del_Node)
            {
                temp -> right = NULL;
                delete(del_Node);
                return;
            }
            else
                q.push(temp -> right);
        }

        if(temp -> left)
        {
            if(temp -> left == del_Node)
            {
                temp -> left = NULL;
                delete(del_Node);
                return;
            }
            else
                q.push(temp -> right);
        }

    }
}
void deleteANode(treeNode* root, int key)
{

    queue <treeNode*> q;
    q.push(root);

    treeNode* temp;
    treeNode* key_Node = NULL;

    while(!q.empty())
    {

        temp = q.front();
        q.pop();

        if(key == temp -> data)
        {
            key_Node = temp;

        }

        // left node will push first and pop first and will visit first
        if(temp -> left) // means if not null then it works
        {
            q.push(temp -> left);
        }

        // right will push later because remaining node will be the right most one
        if(temp -> right) // means if not null then it works
        {
            q.push(temp -> right);
        }


    }

        int x = temp -> data;
        deleteDepestNode(root, temp);
        key_Node -> data = x;
    //return root;
}
void traverse(treeNode* root)
{
    if(root == NULL)
    {
        //cout << "Empty Tree";
        return;
    }
    else
        traverse(root -> left);
        cout << root -> data << "\t";
        traverse(root -> right);
}



//Driver Code
int main()
{
    //manually taking input for making imbalance Tree
    treeNode* root = newNode(10);;
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->left->right = newNode(12);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    puts("Before delete any of Nodes");
    traverse(root);
    puts("\n");
    deleteANode(root, 11);
    puts("After deleting a node");
    traverse(root);




}


