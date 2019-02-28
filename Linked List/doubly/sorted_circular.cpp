
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

/// insert data into circular doubly linked list
void insertAt()
{
    listNode *newNode = getNewNode();
    addData(newNode, getdata());
    listNode *temp = start;
    if(start == NULL)
    {
        start  = last = newNode;
        newNode -> next = newNode;
        newNode -> prev = last;
    }
    else if(temp -> data > newNode -> data)
    {
        newNode -> next = temp;
        newNode -> prev =  temp -> prev;
        temp -> prev = newNode;
        temp -> prev -> next = newNode;
        start = newNode;
    }
    else //temp -> data > newNode -> data
    {
      while(temp -> next -> data < newNode -> data && temp -> next != start)
      {
          temp = temp -> next;
      }

           newNode -> next = temp -> next;
           newNode -> prev = temp;
           temp -> next -> prev = newNode;
           temp -> next = newNode;
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

    insertAt();
    insertAt();
    insertAt();
    insertAt();

    showList(start);


}
