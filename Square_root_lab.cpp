#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    long long root1=0;
    vector <int > input1,root;
    string s;
    while(cin>>s){
for(int i=0;i<s.length();i++ ){
    input1.push_back(s[i]-'0');
    root1=root1*10+s[i]-'0';
}
if(s.length()%2!=0)
    input1.push_back(0);
for(int i=0;i<input1.size();i++)
    cout<<input1[i];
    cout<<endl;
    cout<<sqrt(root1)<<endl;
    long long x=0,y=0,temp;
for(int i=input1.size()-1;i>=0;){
    int a=input1[i]*10+input1[i-1];
    x=x+a;
    cout<<x<<" "<<y<<endl;
    temp=y;
    int k;
    if(x<y)
    {
        y=y*10;
        root.push_back(0);
    }
    else
    for( k=1;k<10;k++)
    {
        if(x<=(temp+k)*k)
        {
    root.push_back(k-1);
    x=x-(temp+(k-1))*(k-1);
    x*=100;
    y=(y+k-1)*20;
            break;

        }
    }

i=i-2;
}
for(int i=0;i<root.size();i++)
    cout<<root[i];
    root1=0;
    }
return 0;
}
