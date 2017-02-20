#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;
string a="abcdefghijklmnopqrstuvwxyz";
map<string, int> mp;
void my()
{
    int p=1;
    for(int i=0; i<26; i++)
    {
        string s;
        s=a[i];
        mp[s]=p;
        p++;
    }
    for(int i=0; i<26; i++)
        for(int j=i+1; j<26; j++)
        {
            string s,s1;
            s=a[i];
            s1=a[j];
            s=s+s1;
            mp[s]=p;
            p++;
        }
    for(int i=0; i<26; i++)
        for(int j=i+1; j<26; j++)
            for(int k=j+1; k<26; k++)
            {
                string s,s1,s2;
                s=a[i];
                s1=a[j];
                s2=a[k];
                s=s+s1+s2;
                mp[s]=p;
                p++;
            }
    for(int i=0; i<26; i++)
        for(int j=i+1; j<26; j++)
            for(int k=j+1; k<26; k++)
                for(int l=k+1; l<26; l++)
                {
                    string s,s1,s2,s3;
                    s=a[i];
                    s1=a[j];
                    s2=a[k];
                    s3=a[l];
                    s=s+s1+s2+s3;
                    mp[s]=p;
                    p++;
                }
    for(int i=0; i<26; i++)
        for(int j=i+1; j<26; j++)
            for(int k=j+1; k<26; k++)
                for(int l=k+1; l<26; l++)
                    for(int m=l+1; m<26; m++)
                    {
                        string s,s1,s2,s3,s4;
                        s=a[i];
                        s1=a[j];
                        s2=a[k];
                        s3=a[l];
                        s4=a[m];
                        s=s+s1+s2+s3+s4;
                        mp[s]=p;
                        p++;
                    }

}
int main()
{
    my();
    string ch;
    while(cin>>ch)
    {
        cout<< mp[ch]<<endl;
    }
    return 0;
}
