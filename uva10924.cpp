#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;
string a1="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
map<char, int> mp;
void my()
{
    int p=1;
    char s;
    for(int i=0; i<52; i++)
    {
        s=a1[i];
        mp[s]=p;
        p++;
    }
}
int main()
{
    my();
    char ch[20];
    while(gets(ch))
    {
        int   sum=0;
        for(int i=0; i<strlen(ch); i++)
        {
            sum+=mp[ch[i]];
        }
        int temp=0;
        for(int i=2; i<=sqrt(sum); i++)
        {
            if(sum%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp!=0)
            cout<<"It is not a prime word.\n";
        else
            cout<<"It is a prime word.\n";
    }
    return 0;
}
