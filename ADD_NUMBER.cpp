#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int x,y,i;
    char a[100],b[100],sum[101];
    for(int j=0; j<10; j++)
    {
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
/////////////////////////////
        if(x>y)
        {
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
        }
///////////////////////////////
        else if(y>x)
        {
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
        }
/////////////////////////////////////////////////////
        else if(x=y)
        {
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
        }
        cout<<"Enter again value for sum \n";
    }
    return 0;
}
