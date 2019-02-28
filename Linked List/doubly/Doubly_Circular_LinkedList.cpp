#include<iostream>

using namespace std;

typedef struct ListNode{
  int data;
  ListNode *next;
  ListNode *prev;
} listNode;

listNode *start = NULL, *last = NULL;

listNode *getNewNode(void)
{
    listNode *newNode = new(listNode);
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;

}

int getdata(void)
{
    int data;
    cin >> data;
    return data;
}

void addData(listNode *p, int data)
{
    p -> data = data;
}

listNode *createNewNode()
{
    listNode *getNode = getNewNode();
    addData(getNode,getdata());
    return getNode;
}

/// Insert at beginning
void insertAtBegining()
{
    listNode *newNode = getNewNode();
    addData(newNode, getdata());
    if(start == NULL)
    {
        start  = last = newNode;
        newNode -> next = newNode;
        newNode -> prev = last;
    }
    else{

        listNode *temp = start;
        start = newNode;
        last = temp -> prev;
        newNode -> next = temp;
        newNode -> prev = last;
        temp -> prev = newNode;
        last -> next = newNode;
    }
}


void insertAtEnd()
{
    listNode *newNode = getNewNode();
    addData(newNode, getdata());
    if(start == NULL)
    {
        start  = last = newNode;
        newNode -> next = newNode;
        newNode -> prev = last;
    }
    else
    {
        listNode *temp = start;
        newNode -> prev = temp -> prev;
        newNode -> next = temp;
        temp -> prev -> next = newNode;
        temp -> prev = newNode;
    }
}

void insertAtPosition(int position, listNode *temp)
{
    listNode *newNode = getNewNode();
    addData(newNode, getdata());
    listNode *p = temp;


    for(int i = 1; i < position; i++)
    {
       p = p -> next;
    }

    if(p != NULL)
    {

      newNode -> prev = p;
      newNode -> next = p -> next;
      p -> next -> prev = newNode;
      p -> next = newNode;
    }
}

void createList(int n)
{
    listNode *currNode = start = createNewNode();
    listNode *temp;

    for(int i = 1; i < n; i++)
    {
        temp = currNode;
        currNode -> next = createNewNode() ;
        currNode = currNode -> next;
        currNode -> prev = temp;

    }

}

void showList(listNode *l)
{
    while(l != NULL)
    {
        cout << l->data << " ";
        l = l -> next;
    }

}

void reverselyShowList(listNode *l)
{
    while(l -> next)
    {

        l = l -> next;

    }

    while(l != NULL)
    {
        cout << l -> data << " ";
        l = l -> prev;
    }

}

int main()
{

    insertAtBegining();
    insertAtBegining();
    insertAtBegining();
    //showList(start);
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtPosition(3, start);

    showList(start);


}
