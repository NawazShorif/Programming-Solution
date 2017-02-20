#include<iostream>
#include<algorithm>
#include<stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector< int > speed;
    int man,ispeed,i,Fast_speed,Sceond_speed,sum,Case,j=0;
    cin>>Case;
    while(j!=Case)
    {
        cout<<"\n";
        while(scanf("%d",&man)&(man>0))
        {
            sum=0;
            speed.clear();
            for(i=0; i<man; i++)
            {
                cin>>ispeed;
                speed.push_back(ispeed);
            }
            sort(speed.begin(),speed.end());
            Fast_speed=speed[0];
            Sceond_speed=speed[1];
            sum=Fast_speed+Sceond_speed;
            i=man-1;
            while(i>2)
            {
                sum+=speed[i]+Sceond_speed;
                sum+=Fast_speed+Sceond_speed;
                i-=2;
            }
            if(i==2)
                sum=sum+speed[i];
            else
                sum-=Fast_speed;
            cout<<sum<<endl;
            cout<<Fast_speed<<" "<<Sceond_speed<<"\n";
            i=man-1;
            while(i>2)
            {
                cout<<Fast_speed<<"\n"<<speed[i-1]<<" "<<speed[i]<<"\n"<<Sceond_speed<<endl;
                cout<<Fast_speed<<" "<<Sceond_speed<<"\n";
                i-=2;
            }
            if(i==2)
                cout<<Fast_speed<<"\n"<<Fast_speed<<" "<<speed[i]<<endl;
        }
        j++;
    }
    return 0;
}
