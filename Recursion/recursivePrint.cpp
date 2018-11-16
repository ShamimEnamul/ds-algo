/* print value from 1 to 10 with recursion */

#include<iostream>
#include<stdio.h>
using namespace std;

void print(int value)
{

    if(value == 0) return;
    print(value - 1);
    cout << value << endl;

}

int main()
{
    int value;
    puts("Enter a number");
    cin >> value;
    print(value);

}
