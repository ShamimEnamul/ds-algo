#include<iostream>

using namespace std;
int findFibonacchi(int n)
{
    if(n <= 1) return n;
    return findFibonacchi(n - 1) + findFibonacchi(n - 2);
}

int main()
{
    int n, result;
    cin >> n;
    result = findFibonacchi(n);
    cout << result << endl;

}
