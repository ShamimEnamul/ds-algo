#include<iostream>

using namespace std;

int bigMod(int a, int b, int M)
{
    if(b == 1) return a & (M - 1);

    int mul = (bigMod(a, b/2, M));
        mul = (mul * mul) & (M - 1);

    if(b & 1)
    {
        return (mul * a)& (M - 1);
    }
    else
    {
        return mul & (M - 1);
    }

}

int main()
{
    int a, b, M, result = 0;

    cin>> a >> b >> M;
    result = bigMod(a, b, M);

    cout << result << endl;
}
