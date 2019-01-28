#include<iostream>

using namespace std;



int comb(int n, int r)
{

    if(n == r) return 1;
    if(r == 1) return r;

    return (comb(n - 1, r) + comb(n - 1, r - 1));
}

int main ()
{
    int n, r, result = 0;

    cin >> n >> r;
    result = comb(n, r);
    cout << result <<endl;
}
