# include <cstdio>
# include <cstdlib>
# include <iostream>
# include <cmath>
using namespace std;
int  main()
{
    int n,i,j,a[3010],b[3010],count,val;
    while(cin >> n)
    {

        for(i=0; i<n; i++)
            cin >> a[i];
        if(n==1) puts("Jolly");
        else if(n==2 )
        {
            if(fabs(a[1]-a[0])==1)
                puts("Jolly");
            else
                puts("Not jolly");
        }
        else if(n==3)
        {
            if(fabs(a[1]-a[0])==1 || fabs(a[2]-a[1])==1)
                puts("Jolly");
            else
                puts("Not jolly");
        }
        else
        {
            for(i=1; i<n; i++)
            {
                b[i-1] = fabs(a[i]-a[i-1]);
            }

            for (i=0 ; i < n-1 ; i++)
            {
                for ( j=0 ; j < n-2-i ; j++)
                {
                    if(b[j] > b[j+1])
                    {
                        b[j]^=b[j+1];
                        b[j+1]^=b[j];
                        b[j]^=b[j+1];
                    }
                }
            }

            if(b[0]==1)
            {
                count=0;
                val = b[1]-b[0];
                for(i=1; i<n-1; i++)
                {
                    if(val && b[i]-b[i-1]==val)
                        count++;
                }

                if(count==n-2)
                    puts("Jolly");
                else puts("Not jolly");
            }
            else
            {
                puts("Not jolly");
            }

        }
    }
    return 0;
}
