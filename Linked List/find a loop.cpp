#include<iostream>
#include<cstdio>
#include<unordered_set>

using namespace std;

typedef struct ListNode{
    int data;
    ListNode *next;
} listNode;

listNode *head = NULL;

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
}

listNode *creatList(int n)
{
    listNode *curr = getNewNode();
    curr = head;
    addData(curr, getData());
    for(int i = 1; i < n; i++)
    {
        curr -> next = creatNewNode();
        curr = curr -> next;
    }
}

bool detecLoop(listNode *curr)
{
    unordered_set<listNode *>  s;

    while(curr != NULL)
    {
        if(s.find(curr) != NULL)
            return true;

        s.insert(curr);
        curr = curr -> next;

    }
    return false;
}

int main()
{
    creatList(4);
    cout << detecLoop(head);
}
