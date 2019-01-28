#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int value, divisor, result = 0;
    puts("Enter value and diivsor ");
    cin >> value >> divisor;

    if(value < 0)
    {
        result = divisor + (value % divisor);
    }
    else
        result = (value % divisor);

        cout << "Reminder :" << result << endl;

}
