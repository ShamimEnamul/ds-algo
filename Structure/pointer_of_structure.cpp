#include<iostream>
#include<string>
#include<sstream>
#include<stdio.h>

using namespace std;

struct movies_t{

    string name;
    int year;

} *s;

int main()
{
   /* movies_t s;
    movies_t *m;

    m = &s;

    getline(cin, m->name);
    cin >> m->year;
    */

    struct movies_t *p = new(movies_t);

    cin >> p ->name;
    cin >> p ->year;

    cout <<  p ->name;
    cout <<  p ->year;



}
