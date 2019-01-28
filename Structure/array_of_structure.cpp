#include<iostream>
#include<cstring>
#include<sstream>
#include<stdio.h>

using namespace std;

struct movie_t{

    string title;
    int year;

} mine[3];

int main()
{
    string s;

    for( int i = 0; i < 3; i++)
    {
        puts("Enter your movie title");
        getline(cin, mine[i].title);
        puts("Enter your movie releasing year");
        getline(cin, s);
        stringstream(s) >> mine[i].year;

    }

    puts("here is your movie name and year");
    for( int i = 0; i < 3; i++)
    {
        cout << mine[i].title <<"\t" << mine[i].year << endl;

    }
}
