#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter digit of numder"<<endl;
    int x,y,i;
    cin>>x;
    char a[x],b[x],sum[x+1];
    cout<<"Now enter the value of A"<<endl;
    for( i=0; i<x; i++)
        cin>>a[i];
    cout<<"Now enter the value of B"<<endl;
    for( i=0; i<x; i++)
        cin>>b[i];
    cout<<"A=";
    for( i=0; i<x; i++)
        cout<<a[i];
    cout<<endl;
    cout<<"B=";
    for( i=0; i<x; i++)
        cout<<b[i];
    cout<<endl;
    int carry=0;
    for(i=x; i>0; i--)
    {
        int div=(a[i-1]-48)+(b[i-1]-48);
        sum[i]=(div+carry)%10+48;
        carry=(div+carry)/10;
    }
    if(carry==0)
        sum[0]='0';
    else
        sum[0]='1';
    cout<<"sum=";
    for( i=0; i<x+1; i++)
        cout<<(sum[i]);
    cout<<endl;
    return 0;
}
