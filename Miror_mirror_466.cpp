#include<iostream>
using namespace std;
bool happy[2][10][10];
int size;

bool funny( bool v1, int v2 )
{
    int x, y, ix, iy;
    bool r90, r180;
    if ( v2 % 180 != 0 )
    {
        r90 = true;
    }
    else
    {
        r90 = false;
    }
    if ( v2 >= 180 )
    {
        r180 = true;
    }
    else
    {
        r180 = false;
    }
    for ( y = 0 ; y < size ; y++ )
    {
        for ( x = 0 ; x < size ; x++ )
        {
            iy = (v1)?(size-1-y):y;
            if ( r90 )
            {
                ix = size - 1 - iy;
                iy = x;
            }
            else
            {
                ix = x;
            }
            if ( r180 )
            {
                ix = size -1 - ix;
                iy = size -1 - iy;
            }
            if ( happy[0][y][x] != happy[1][iy][ix] )
            {
                return(false);
            }
        }
    }
    return(true);
}

main()
{
    int i, j, count = 0;
    char input;
    while ( cin>>size )
    {
        count++;
        for ( i = 0 ; i < size ; i++ )
        {
            for ( j = 0 ; j < size ; j++ )
            {
                cin >> input;
                if ( input == 'X' || input == 'x' )
                {
                    happy[0][i][j] = true;
                }
                else
                {
                    happy[0][i][j] = false;
                }
            }
            for ( j = 0 ; j < size ; j++ )
            {
                cin >> input;
                if ( input == 'X' || input == 'x' )
                {
                    happy[1][i][j] = true;
                }
                else
                {
                    happy[1][i][j] = false;
                }
            }
        }
        if ( funny( false , 0) )
        {
            cout << "Pattern " << count << " was preserved.";
        }
        else if ( funny( false , 90) )
        {
            cout << "Pattern " << count << " was rotated 90 degrees.";
        }
        else if ( funny( false , 180) )
        {
            cout << "Pattern " << count << " was rotated 180 degrees.";
        }
        else if ( funny( false , 270) )
        {
            cout << "Pattern " << count << " was rotated 270 degrees.";
        }
        else if ( funny( true , 0) )
        {
            cout << "Pattern " << count << " was reflected vertically.";
        }
        else if ( funny( true , 90) )
        {
            cout << "Pattern " << count << " was reflected vertically and rotated 90 degrees.";
        }
        else if ( funny( true , 180) )
        {
            cout << "Pattern " << count << " was reflected vertically and rotated 180 degrees.";
        }
        else if ( funny( true , 270) )
        {
            cout << "Pattern " << count << " was reflected vertically and rotated 270 degrees.";
        }
        else
        {
            cout << "Pattern " << count << " was improperly transformed.";
        }
        cout << endl;
    }
}
