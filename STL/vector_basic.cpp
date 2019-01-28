
#include<iostream>
#include<map>
#include<vector>
#include<iterator>

using namespace std;

#define PB push_back //macros; no semicolon after the line end
typedef pair<int, int> pi; //typedef for shorten code

int main()
{
    vector<int> v(3);
    int i;
/*
    v[0] = 5;
    v[1] = 55;
    v[2] = 555;

    v.push_back(5555);

    cout << v.front() << endl;
    cout << v.back() << endl;

*/



    for( i = 0; i < 10; i++)
    {
        v.PB(i);
    }

    vector<int> :: iterator itr;
    for(itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.resize(4);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

}

