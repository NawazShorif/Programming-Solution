#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<string>
using namespace std;
vector <int> padding(vector <int> x,vector<int> y)
{
    int i;
    for(i=y.size(); i<x.size(); i++)
        y.push_back(0);
    return y;
}

int main()
{
    bool my;
    vector< int > input1_1;
    vector< int > input1_2;
    vector< int > input2_1;
    vector< int > input2_2;
    vector< int > sum;
    int i,j,carry=0;
    string input1,input2;
    cin>>input1;
    cin>>input2;
    input1_1.clear();
    input1_2.clear();
    input2_1.clear();
    input2_2.clear();
    sum.clear();
    my=true;
    for(i=0; i<input1.length(); i++)
    {
        if(input1[i]=='.')
        {
            my=false;
            continue;
        }
        if(my==true)
            input1_1.push_back(input1[i]-'0');
        else if(my==false)
            input1_2.push_back(input1[i]-'0');

    }
    for(i=0; i<input2.length(); i++)
    {
        if(input2[i]=='.')
        {
            my=false;
            continue;
        }
        if(my==true)
            input2_1.push_back(input2[i]-'0');
        else if(my==false)
            input2_2.push_back(input2[i]-'0');

    }
    if(input1_2.size()>input2_2.size())
        input2_2=padding(input1_2,input2_2);
    else
        input1_2=padding(input2_2,input1_2);
    ////////////////////////
    reverse(input1_1.begin(),input1_1.end());
    reverse(input2_1.begin(),input2_1.end());
    if(input1_1.size()>input2_1.size())
        input2_1=padding(input1_1,input2_1);
    else
        input1_1=padding(input2_1,input1_1);
    carry=0;
    for(i=input1_2.size()-1; i=0; i--)
    {
        sum.push_back((input1_2[i]+input2_2[i]+carry)%10);
        carry=(input1_2[i]+input2_2[i]+carry)/10;
    }
    for(i=0; i<input1_1.size(); i++)
    {
        sum.push_back((input1_1[i]+input2_1[i]+carry)%10);
        carry=(input1_1[i]+input2_1[i]+carry)/10;
    }
    if(carry==1)
        sum.push_back(1);
    reverse(sum.begin(),sum.end());
    for(i=0; i<sum.size(); i++)
        cout<<sum[i];

    return 0;
}
