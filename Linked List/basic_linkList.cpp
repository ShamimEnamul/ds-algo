#include<iostream>

using namespace std;

typedef struct ListNode{

    int data;
    ListNode *next;

} listNode;

listNode *head = NULL;

listNode *getNewNode(void)
{
   listNode *node = new(listNode);
   node->next = NULL;

   return node;
}

int getData()
{
    int data;
    cin >> data;

    return data;

}

void addData(listNode *p, int value)
{
    p -> data = value;
}

listNode *creatNewNode(void)
{
    listNode *curNode = getNewNode();
    addData(curNode, getData());

    return curNode;
}

/// make a list with many nodes
listNode *creatList(int totalNodes)
{
    listNode *curNode = head = getNewNode();
    addData(curNode, getData());

    for ( int i = 1; i <= totalNodes; i++)
    {
        curNode -> next = creatNewNode();
        curNode = curNode -> next;
    }

   return head;
}



///insert new node middle of the list

void insertNode(listNode *node, listNode *prev)
{
    if(prev == NULL) ///inserting node at head
    {
        node -> next = head;
        head = node;
    }
    else{
        node -> next = prev -> next;
        prev -> next = node;
    }

}

///delete node after prev node
void deleteNode(listNode *prev)
{
    listNode *temp;
    if(prev == NULL)
    {
        temp = head;
        head = temp -> next;
    }
    else {

        temp = prev -> next;
        prev = temp -> next;
    }
}

///search a data from giving node address

bool searchAData(int data)
{
    listNode *curr = head;

    while(curr != NULL)
    {
        if(curr -> data == data) return true;

        else{
            curr = curr -> next;
        }
    }
}

///showing all the data sequentially from the head;

void showList(listNode *curr)
{

    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}



int main()
{

    head = creatList(4);
    deleteNode(head);
    showList(head);



}
