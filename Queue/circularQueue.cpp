
#include<iostream>
#include<queue>

using namespace std;

#define MAX_SIZE 5
int arr[MAX_SIZE];
int first = -1, last = -1;

void Enque(int x)
{
    /*
    if(arr.size() > (MAX_SIZE -2))
    {
        cout << "Overflow:occur" << endl;
    }
    else
        arr[arr.size()-1] = x;

    */
    if((last + 1) == first)
    {
        cout << "Overflow:occur" << endl;
    }

    else if(first == -1 && last == -1)
    {
        last = first = 0;

    }

    else
    {
        last = (last + 1) % MAX_SIZE;
    }

    arr[last] = x;

}

void Deque()
{
    if(last == -1 && first == -1)
    {
       cout << "Underflow:occur" << endl;
    }

    else if(last == first)
    {
        last = first = -1;
    }

    else{
        first = (first + 1) % MAX_SIZE;
    }

}

bool isEmpty()
{
    if(first == -1 && last == -1)
        return true;
    else
        return false;
}

int top()
{
    return arr[first];
}

void show()
{
    for(int i = first; i <= last; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    Enque(1); //0
    Enque(2); //1
    Enque(3); //2
    Enque(4); //3
    Enque(5); //4
    Deque();
    Deque();
    show();



}
