#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> n;
    int input=1000;
    while(scanf("%d",&input)==1)
    {
        int  temp=input-1;
        while(input>0)
        {
            n.push_back(input%10);
            input/=10;
        }
        for(int i=temp; i>1; i--)
        {
            int  carry=0;
            for(int j=0; j<n.size(); j++)
            {
                int temp1=n[j]*i+carry;
                n[j]=temp1%10;
                carry=temp1/10;
            }
            while(carry!=0)
            {
                n.push_back(carry%10);
                carry/=10;
            }
        }
        if(temp+1==0)
            n.push_back(1);
        cout<<(temp+1)<<'!'<<endl;
        for(int i=n.size()-1; i>=0; i--)
            cout<<n[i];
        cout<<endl;
        n.clear();
    }
    return 0;
}
