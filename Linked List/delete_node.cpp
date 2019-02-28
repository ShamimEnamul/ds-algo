#include<iostream>
#include<cstdio>
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

    for ( int i = 1; i < totalNodes; i++)
    {
        curNode -> next = creatNewNode();
        curNode = curNode -> next;
    }

   return head;
}

///delete node from ending point

void erase_Node_from_end(listNode *head)
{
    listNode *curr;
    listNode *prev;
    curr = head;
    while(curr -> next != NULL)
    {
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = NULL;
    delete curr;
}
///delete node from starting point

void erase_Node_from_staring(listNode *h)
{
    listNode *curr;
    curr = h;
    head = h ->next;
    delete curr;
}
///Delete node from a particular position
void erase_node(listNode *head, int n)
{

    listNode *cur;
    listNode *prev;
    cur = head;

    for(int i = 1; i < n; i++)
    {
        prev = cur;
        cur = cur -> next;
    }
    prev -> next = cur -> next;
    delete cur;


}
void showList(listNode *curr)
{

    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    puts("\n");
}

int main()
{


     head = creatList(4);
     puts("Display Full list of 10 Nodes\n");
     showList(head);
     erase_Node_from_staring(head);
     puts("Display List after deleting the Starting Node\n");
     showList(head);
     erase_Node_from_end(head);
     puts("Display List after deleting the Last Node\n");
     showList(head);
     erase_node(head,2);
     puts("Display List after deleting the n'th Node\n");
     showList(head);

}



