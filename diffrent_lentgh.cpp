#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int x,y,i;
    char a[100],b[100],sum[101];
    cout<<"Now enter the value of A"<<endl;
    gets(a);
    x=strlen(a);
    cout<<"Now enter the value of B"<<endl;
    gets(b);
    y=strlen(b);
    cout<<"A=";
    puts(a);
    cout<<endl;
    cout<<"B=";
    puts(b);
    cout<<endl;
    int carry=0;
    for(i=x-1; i>x-y; i--)
    {
        int div=(a[i]-'0')+(b[i-x+y]-'0');
        sum[i]=(div+carry)%10+'0';
        carry=(div+carry)/10;
    }
    if(carry==0)
        sum[x-y]=a[x-y];
    else
        sum[x-y]=a[i]+1;
    for(i=0; i<x-y; i++)
        sum[i]=a[i];
    cout<<"sum=";
    for( i=0; i<x; i++)
        cout<<(sum[i]);
    cout<<endl;
    return 0;
}
