#include<iostream>
#include<cstdio>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    char n[20],b[20],sum[20];
    int x,y,i;
    cout<<"Enter your number\n";
    gets(n);
    x=strlen(n);
    cout<<x;

    strcpy(b,strrev(n));
    puts(b);
    for(y=0; y<20; y++)
    {
        int carry=0;
        for(i=x; i>0; i--)
        {
            int div=(n[i-1]-48)+(b[i-1]-48);
            sum[i]=(div+carry)%10+48;
            carry=(div+carry)/10;
        }
        if(carry==0)
            sum[0]='0';
        else
            sum[0]='1';
        strcpy(n,sum);
        puts(n);
        strcpy(b,strrev(n));
        cout<<b;
    }
    return 0;
}
