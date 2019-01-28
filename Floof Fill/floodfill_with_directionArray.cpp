#include<iostream>

#define invalid(i, j) i < 0 || i > 4 || j < 0 || j > 4

using namespace std;

int arr[5][5];
int vis[5][5];

///direction matrix
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
int x, y;

void ffill(int i, int j)
{



    if(arr[i][j] == 5 && vis[i][j] == 0)
    {

       vis[i][j] = 1;

       for(int k = 0; k < 4; k++)
        {
            x = i + fx[k];
            y = j + fy[k];

            if(invalid(x, y)) return;
            else
            {
                ffill(x ,y);
            }
        }

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











