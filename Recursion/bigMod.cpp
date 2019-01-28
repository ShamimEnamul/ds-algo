#include<iostream>

using namespace std;

int bigMod(int a, int b, int M)
{
    if(b == 1) return a % M;

    int mul = (bigMod(a, b/2, M));
        mul = (mul * mul) % M;

    if(b & 1)
    {
        return (mul * a) % M;
    }
    else
    {
        return mul % M;
    }

}

int main()
{
    int a, b, M, result = 0;

    cin>> a >> b >> M;
    result = bigMod(a, b, M);

    cout << result << endl;
}
