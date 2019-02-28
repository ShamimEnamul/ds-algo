#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

typedef struct ListNode{
    int data;
    ListNode *next;
} listNode;

listNode *A = NULL;
listNode *B = NULL;

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

listNode *creatList(int n)
{
    listNode *curr = getNewNode();
    listNode *head = curr;
    addData(curr, getData());
    for(int i = 1; i < n; i++)
    {
        curr -> next = creatNewNode();
        curr = curr -> next;
    }
    return head;

}

int length(listNode *curr)
{
    int cnt = 1;
    while(curr != NULL)
    {
        cnt++;
        curr = curr -> next;
    }
    return cnt;
}

///find merge point with iteration
listNode *findMergePoint(listNode *A, listNode *B)
{

    int la, lb, i;
    la = length(A);
    lb = length(B);
    listNode *temp = B;
    for(i = 0; i < la; i++)
    {
        B = temp;
        for(i = 0; i <lb; i++)
        {
            if(A == B)
                return A;
        }
        A = A -> next;
    }
    return NULL;

}

///find merge point with set
listNode *findMergePoint_set(listNode *A, listNode *B)
{
    int la, lb, i;

    la = length(A);
    lb = length(B);
    set <listNode*> s;
    for(i = 0; i < lb; i++)
    {
        s.insert(B);
        B = B -> next;
    }

    for(i = 0; i < la; i++)
    {
        if(s.find(A) != s.end())
            return A;
        A = A -> next;
    }
    return NULL;

}
///find merge point using length
listNode *findMergePoint_best(listNode *A, listNode *B)
{
    int la, lb, i, d;

    la = length(A);
    lb = length(B);
     d = lb - la;
    if(la > lb)
    {
        listNode *temp = B;
        B = A;
        A = temp;
    }

    for(i = 0; i < d; i++)
    {
        B = B -> next;
    }

    while(A -> next && B -> next)
    {
        if( A == B)
            return A;
    }
    return NULL;

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
    puts("Enter for A");
    A = creatList(4);
    puts("Enter for B");
    B = creatList(5);
    showList(A);
    showList(B);
    if(findMergePoint(A, B))
    {

    }
    else
        cout << "NULL";
}
