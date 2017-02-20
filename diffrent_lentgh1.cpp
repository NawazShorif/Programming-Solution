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
    for(i=y-1; i>y-x; i--)
    {
        int div=(a[i-y+x]-'0')+(b[i]-'0');
        sum[i]=(div+carry)%10+'0';
        carry=(div+carry)/10;
    }
    if(carry==0)
        sum[y-x]=b[y-x];
    else
        sum[y-x]=b[i]+1;
    for(i=0; i<y-x; i++)
        sum[i]=b[i];
    cout<<"sum=";
    for( i=0; i<y; i++)
        cout<<(sum[i]);
    cout<<endl;
    return 0;
}
