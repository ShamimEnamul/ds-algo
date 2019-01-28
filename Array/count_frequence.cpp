#include<iostream>
#include<map>
#include<iterator>

using namespace std;

typedef pair<int, int> pi; //typedef for shorten code

int main()
{



    int arr[11], i, temp;
    map<int, int> m;

    for(i = 0; i < 11; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;

    }

    map<int, int> :: iterator itr;

    cout << "Distinct numbers : " << m.size()<< endl;
    cout << "Digit" << "\tFrequency" << endl;

    for(itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr -> first << "\t" << itr -> second << endl;
    }


}

