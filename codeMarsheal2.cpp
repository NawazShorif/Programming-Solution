#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int main()
{
    vector< int> output;
    int test;
    cin>>test;
    int i,c,j,k,place[test];
    for(i=0; i<test; i++)
    {
        int rauder[test];
        cin>>rauder[i];
        cin>>place[i];
        int x[place[i]],y[place[i]],mainX[rauder[i]],mainY[rauder[i]],Radious[rauder[i]];
        for(j=0; j<rauder[i]; j++)
        {cin>>mainX[j];
        cin>>mainY[j];
        cin>>Radious[j];
        }
    for(k=0; k<place[i]; k++)
            {
                cin>>x[k];
                cin>>y[k];
            }
    for(k=0; k<place[i]; k++)
            {
                c=0;
               for(j=0;j<rauder[i];j++){
                   if(sqrt(pow(x[k]-mainX[j],2)+pow(y[k]-mainY[j],2))<=Radious[j]){
                   c++;
                   break;
                   }
               }
                output.push_back(c);
            }

    }
    k=0;
    for(i=0; i<test; i++){
            cout<<"Case :\n";
            for(j=0;j<place[i];j++)
            {
                if(output[k]==1)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                k++;
            }
    }
    return 0;
}
