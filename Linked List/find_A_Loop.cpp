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
    curr -> next = head;

}
/*
///detect loop using hash Table
bool detecLoop(listNode *curr)
{
    unordered_set <listNode *> s;

    while(curr != NULL)
    {
        if(s.find(curr) != NULL)
            return true;

        s.insert(curr);
        curr = curr -> next;

    }
    return false;
}
*/

///detect loop using floyd's cycle {not first loop node}
listNode *detectLoop(listNode *curr)
{
    listNode *nodeX, *node2x;

    node2x = curr;
    nodeX = curr;
    while(node2x && node2x->next) //check both node not becomes null
    {
       // cout << nodeX -> data << "\t" <<node2x ->data << endl;
        nodeX = nodeX -> next;
        node2x = node2x -> next -> next;
        if(node2x == nodeX) return nodeX;

    }

    return NULL;

}
///detect_*firstNode_of_loop #1
listNode *firstNode_of_loop(listNode *loop_node, listNode *s_node)
{
    listNode *sp, *fp; /// sp = pointing start node
     sp = s_node;
     fp = loop_node;
     while(1)
     {
         if(sp = fp) return sp;

         sp = sp -> next;
         fp = fp -> next;
     }
}
/// remove loop && detect *first node with way #2
void remove_loop(listNode *loop_node, listNode *s_node)
{
     cout << "loop node data" << loop_node->data << endl;
   listNode *sp, *fp; /// sp = pointing start node
     sp = s_node;

     while(1)
     {
        fp = loop_node;

        while( fp -> next != loop_node && fp -> next != sp)
        {
            fp = fp -> next;
        }
        if(fp -> next == sp)
        {
            fp -> next = NULL;
            break;
        }
        else
            sp = sp -> next;

     }
}
/*
/// remove loop && detect first node with way #3
void remove_loop_2(listNode *loop_node, listNode *s_node)
{
    cout << "loop node data" << loop_node->data << endl;
   listNode *sp, *fp; /// sp = pointing start node
     sp = s_node;
     fp = loop_node;

        while( fp -> next != sp -> next)
        {
            fp = fp -> next;
            sp = sp -> next;
        }

        fp -> next = NULL;




}
*/
int length_Of_loop(listNode *loopNode)
{
    int cnt = 1;
    listNode *temp = loopNode;
    while(temp -> next != loopNode)
    {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
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
    creatList(9);
    //showList(head); // Run infinity times because there is no null pointer
   puts("length of loop : ")
   cout << length_Of_loop(detectLoop(head));
   if(detectLoop(head) != NULL)
    {

      remove_loop_2(detectLoop(head), head);
    }

     showList(head);


}
