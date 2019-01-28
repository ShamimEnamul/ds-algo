#include<iostream>

using namespace std;

int arr[5][5];
int vis[5][5];



void ffill(int i, int j)
{

    if(i < 0 || i > 4 || j < 0 || j > 4) return;

    if(arr[i][j] == 5 && vis[i][j] == 0)
    {

       vis[i][j] = 1;

       ffill(i,j-1);
       ffill(i,j+1);
       ffill(i-1,j);
       ffill(i+1,j);

    }



}

int main()
{

    int cnt = 0, temp;

    for( int i = 0; i < 5; i++ )
    {
        for(int j = 0; j < 5; j++ )
        {
            cin >> temp;
            arr[i][j] = temp;
        }
    }


    /*for( int i = 0; i < 5; i++ )
    {
        for(int j = 0; j < 5; j++ )
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    */

    for( int i = 0;  i < 5; i++ )
    {
        for(int j = 0; j < 5; j++ )
        {
            if(arr[i][j] == 5 && vis[i][j] == 0)
            {

                ffill(i,j);
                cnt++;
            }
        }
    }

     cout << "region : " << cnt << endl;

   /*  for( int i = 0; i < 5; i++ )
    {
        for(int j = 0; j < 5; j++ )
        {

            cout << vis[i][j] << " ";
        }
        cout << endl;
    }

    */



}











