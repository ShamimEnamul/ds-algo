#include<iostream>

using namespace std;
int sum(int n)
{
    if(n == 1) return n;
    return n + sum(n - 1);
}

int main()
{
    int n, result;
    cin >> n;
    result = sum(n);
    cout << result << endl;

}

