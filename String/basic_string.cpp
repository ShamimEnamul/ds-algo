
#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<iterator>
#include<cstring>

using namespace std;

#define PB push_back //macros; no semicolon after the line end
typedef pair<int, int> pi; //typedef for shorten code
bool flag = false;
int main()
{
    char greeting[6] = {'h','e','l','l','o','\0'};
    char greeting1[20];
    char greeting2[20];
    bool t;

    string str, str2, str3;
    str3 = "abcd";

    puts("output for greeting : ");
    puts(greeting); /// character = 5 but size needs 6 because of null character;


    puts("Enter your string input for greeting1 : ");
    cin >> greeting1; /// print before any space or new line

    puts("output for greeting1 : ");
    puts(greeting1);


    ///this type of input will print output with space
    cin.getline(greeting2, 20);
    puts(greeting2);

    ///copy from one string to another
    puts("take input for str2");
    cin >> str2;
    //str = str2;
    puts("output of str");///puts(str)-> will give an error
    //cout << str << "\n";
    ///another way with library function
    strcpy(greeting,greeting1); /// just work with char array not string type
    strcat(greeting,greeting1);

    strlen(greeting1);
    t = strcmp(greeting,greeting1);
    cout << "output of strcmp  " << t;









return 0;
}

