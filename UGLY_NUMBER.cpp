#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int a,i=1,b,c=2,d;
//    while(i<1500)
//    {
        a=20;
        while(a%2==0 && a/2!=1)
        {
            cout<<a<<endl;
            a/=2;
        }
        while(a%3==0 && a/3!=1)
        {
            a/=3;
        }
        while(a%5==0 && a/5!=1)
        {
            a/=5;
        }
        if(a==1)
        {
            cout<<20<<"   is UGLY NUMBER\n";
            d=1;
          //  i++;
        }
       // else
        //    i++;
    //}
    return 0;
}
