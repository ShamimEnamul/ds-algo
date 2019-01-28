
#include<iostream>
#include<map>
#include<iterator>

using namespace std;

typedef pair<int, int> pi; //typedef for shorten code

int main()
{
      // empty map container
    map<int, int > test;

     // insert elements in random order
    test.insert(pi(1, 4));
    test.insert(pi(2, 44));
    test.insert(pi(3, 444));
    test.insert(pi(4, 4444));

     // printing map test
    map<int, int> :: iterator itr;

    cout << "Key" << "\tValue" <<endl;
    for( itr = test.begin(); itr!=test.end(); itr++)
    {
        cout<<itr -> first <<"\t"
        << itr -> second << endl;
    }

    //erase
    test.erase(test.begin(), test.find(1));

    cout << "After erasing values" << endl <<endl;
    cout << "Key" << "\tValue" <<endl;
    for( itr = test.begin(); itr!=test.end(); itr++)
    {
        cout<<itr -> first <<"\t"
        << itr -> second << endl;
    }

    cout << "size of the map : " << test.size()<< endl;
    cout << "size of the map : " << test.max_size()<< endl;

    cout << "lower bound of 2" <<endl;
    cout << test.lower_bound(2) -> first <<"\t";
    cout <<test.lower_bound(2)-> second << endl;

    cout << "upper bound of 2" << endl;
    cout << test.upper_bound(2) -> first <<"\t";
    cout <<test.upper_bound(2)-> second << endl;

    //remove all
    test.clear();

    bool em = test.empty();
    cout << "map is empty : " << em << endl; // 1 for true and 0 for false
}
