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
