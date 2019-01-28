#include<iostream>
#include<cstring>

using namespace std;

bool pali(char *c, int l, int r)
{
    return (l >= r) || (c[l] == c[r]) && pali(c, l+1, r-1);
}

int main()
{
    int r, l;
    char str[100];
    cin >> str;
    r = strlen(str) - 1;

    if(pali(str, 0, r)) cout << "A palindrom Number" << endl;

    else cout << "Not A palindrom Number" << endl;


}
