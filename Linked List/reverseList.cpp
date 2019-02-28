#include<iostream>
#include<cstdio>

using namespace std;

typedef struct ListNode{
    int data;
    ListNode *next;
} listNode;

ListNode *head;
listNode *getNewNode(void)
{
    listNode *curr = new(listNode);
    curr -> next = NULL;
    return curr;
}

int getData(void)
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
     listNode *curr = getNewNode();
     addData(curr, getData());
     return curr;
}

void creatList(int n)
{
    listNode *curr = getNewNode();
    head = curr;
    addData(curr, getData());
    for(int i = 1; i < n; i++)
    {
        curr -> next = creatNewNode();
        curr = curr -> next;
    }

}
///Just print recursive way
void printRecursiveWay(listNode *p)
{

    if(p -> next == NULL)
    {
         cout << p -> data << " ";
        return;
    }

    printRecursiveWay(p -> next);
    cout << p -> data << " ";
}

///reverse link list using recursion

void reverseRecursiveWay(listNode *p)
{

    if(p -> next == NULL)
    {
        head = p;
        return;
    }

    reverseRecursiveWay(p -> next);
    listNode *prev = p -> next;
    prev -> next = p;
    p -> next = NULL;

}





///reverse linked list using iteration
void reverseNode(listNode *node)
{
    listNode *next, *prev, *curr;

    curr = node;
    next = NULL;
    prev = NULL;

    while(curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

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

    creatList(5);
    puts("reversely print which will not affect the main list : ");
    printRecursiveWay(head);
    puts("\n");
     showList(head);
    puts("reverse the list permanently ");
    reverseRecursiveWay(head);
    showList(head);


}
