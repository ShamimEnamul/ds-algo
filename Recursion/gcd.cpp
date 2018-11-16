#include<iostream>

using namespace std;
int gcd(int a, int b)
{
    if(b % a == 0) return a;
    return gcd(b % a, a);
}

int main()
{
    int x, y, result;
    cin >> x >> y;
    result = gcd(x, y);
    cout << result << endl;
}
