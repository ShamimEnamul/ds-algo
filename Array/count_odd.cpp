
#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<iterator>

using namespace std;

#define PB push_back //macros; no semicolon after the line end
typedef pair<int, int> pi; //typedef for shorten code
bool flag = false;
int main()
{
  vector<int> numbers(11);
  int res = 0, i;

  for(i = 0; i < 11; i++)
  {
      cin >> numbers[i];

      res = (res ^ numbers[i]);
  }

  cout << res << "\n";
return 0;
}

