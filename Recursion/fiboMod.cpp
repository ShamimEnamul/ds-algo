#include<iostream>

using namespace std;

int mod(int n)
{
    if(n <= 1) return n % 97;

    return (mod(n-1) * n ) % 97; // mod value is 97
}
int main()
{
    int n;

    cin>> n;
    cout << mod(n) << endl;

}
