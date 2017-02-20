#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long n,temp=0,i,sum;
    int case,j;
    string s;
cin>>case;
int input[case];
    cin>>s;
for(j=0; j<case; j++)
        {
            input[j]=s[j*2]-'0';
        }
    {
        temp=pow(2,input-1)*(pow(2,input)-1);
        sum=0;
        temp=input;
        for(i=1; i<=temp/2; i++)
        {
            if(temp%i==0)
                sum+=i;
        }
        if(sum==temp)
            cout<<"YES\n";
    }
    return 0;
}
