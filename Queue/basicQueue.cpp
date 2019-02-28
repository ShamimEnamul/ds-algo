#include<iostream>
#include<queue>

using namespace std;

#define MAX_SIZE 10
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
    if(last == (MAX_SIZE-1))
    {
        cout << "Overflow:occur" << endl;
    }

    else if(first == -1 && last == -1)
    {
        last = first = 0;

    }

    else
    {
        last++;
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
        first++;
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

int main()
{


}
