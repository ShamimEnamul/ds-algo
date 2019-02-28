#include<iostream>

using namespace std;

typedef struct ListNode{
  int data;
  ListNode *next;
  ListNode *prev;
} listNode;

listNode *head = NULL;

listNode *getNewNode(void)
{
    listNode *newNode = new(listNode);
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;

}

int data(void)
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
    addData(getNode,data());
    return getNode;
}

void createList(int n)
{
    listNode *currNode = head = createNewNode();
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
    int n;
    puts(" Enter the number you want to enter");
    cin >> n;
    createList(n);
    reverselyShowList(head);

}
