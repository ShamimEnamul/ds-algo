#include<iostream>

using namespace std;
#define stack_size 6;

int top = -1;///top = 0;
char stack[stack_size];
void push(char x)
{
    if(top >= stack_size-1) ///(top > stack_size)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        stack[top] = x;
        /*
        stack[top] = x;
        top++;
        */
    }


}

/*pop function has return type and value */
char pop()
{
    char x;
    if(top < 0)
    {
        cout << "underflow: stack is empty" << endl;
    }
    else{
        x = stack[top];
        top--;
        return x;
    }

}

/*top function has return type and value */
char top()
{
    return stack[top];

}

bool IsEmpty()
{
    return (top < 0);
}

bool IsFull()
{
    return (top >= stack_size-1);
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    push(5);
    pop();
    pop();
    cout << "top element of stack is = " << top() << endl;
    cout << "top index of stack is = " << top << endl;
}
