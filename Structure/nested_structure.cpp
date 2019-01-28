
#include<iostream>
#include<string>
#include<sstream>
#include<stdio.h>

using namespace std;

struct movies_t{

    string name;
    int year;

} *s;

struct frnd{

    string name;
    int age;
    struct movies_t fvrtMovie;

};

int main()
{

    frnd taharat;

    cin >> taharat.age;
    cin >> taharat.name;
    cin >> taharat.fvrtMovie.name;
    cin >> taharat.fvrtMovie.year;

    cout << taharat.age;
    cout << taharat.name;
    cout << taharat.fvrtMovie.name;
    cout << taharat.fvrtMovie.year;


}
