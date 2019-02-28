#include<iostream>
#include<cstdio>
#include<set>
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
bool b(listNode *curr)
{


    set <listNode *> s;

    while(curr != NULL)
    {
        if(s.find(curr) != NULL)
            return true;

        s.insert(curr);
        curr = curr -> next;

    }
    return false;


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

     showList(head);

}



