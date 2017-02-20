#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long factorial(long long x)
{
    long long n=1;
    for(long long l=1; l<=x; l++)
        n*=l;
    return (n);
}
int main()
{
    vector<long long >input;
    int test;
    int n;
    long long k,my;
    cin>>n;
    input.clear();
    int i=0;
    while(cin>>my && i<n)
    {
        input.push_back(my);
        i++;
    }
    long long sum=0;
    long long temp=0;
    int counter=1;
    sort(input.begin(),input.end());

    for(int i=0; i<n; i++)
    {
        if(input[i]>k)
            continue;
        else if(input[i]==k)
        {
            sum+=factorial(counter)*factorial(n-1);
            continue;
        }
        else if(input[i]<k){
                temp=temp+input[i];
        for(int j=1; j<n; j++)
            {
                if(input[j]+temp>k)
                    continue;
                else if(input[j]+temp==k)
                {
                    sum+=factorial(counter)*factorial(n-1);
                    continue;
                }
                else if(input[j]+temp<k)
                {
                    temp=input[j]+temp;
                    counter++;
                }
            }}
    }
    cout<<sum;
    return 0;
}
