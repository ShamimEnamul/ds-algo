#include<iostream>

using namespace std;

#define MAX_SIZE 101
int a[MAX_SIZE];

int top = -1;
void push(int x)
{
    if(top == MAX_SIZE - 1)
    {
      cout << "Error : stack overflow ";
      return;
    }
    top++;
    a[top] = x;
}

void pop()
{
    if(top < 0)
    {
      cout << "Error : stack underflow ";
      return;
    }
    top--;
}

int Top()
{
    return a[top];
}

bool IsEmpty()
{
    if(top < 0)
        return true;
    else
        return false;
}
void print()
{
    for(int i = 0; i <= top; i++)
    {
        cout << a[i] << " ";
    }

}

int main()
{
    push(2);
    push(2);
    push(2);
    push(2);
    pop();
    pop();
    print();


}
