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


///find Mid value from link list..complexity : O(2n)
int findmidleofLinkeList(listNode *curr)
{

    int cnt = 0, check = 0;
    listNode *mid = curr;

    while(curr != NULL)
    {
        cnt++;
        curr = curr -> next;
    }
    check = cnt / 2;

    while(mid != NULL)
    {
        cout <<"L : " <<check << endl;
        if(check == 0) return mid -> data;
        mid = mid -> next;
        check--;

    }



}
///find Mid value from link list..complexity : O(n); [O(n/2)]
int findmidleofLinkeList_2(listNode *curr)
{
    listNode *cur2x;
    listNode *cur;
    cur = cur2x = curr;

    while(cur2x != NULL && cur2x -> next != NULL)
    {
        cur2x = (cur2x -> next) -> next;
        cur = cur -> next;
    }


    return cur -> data;



}

///find Mid value from link list..complexity : O(n); [O(n/2)]

int findmidleofLinkeList_3(listNode *curr)
{

    listNode *mid = curr;
    int cnt = 0;

    while(curr != NULL)
    {
        if(cnt & 1) mid = mid -> next;

        curr = curr -> next;
        cnt++;

    }

    return mid -> data;

}



int main()
{
    //cout << findmidleofLinkeList(creatList(4));
    cout << findmidleofLinkeList_3(creatList(4));


}
