#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<long long int > output;
    int test,i,j;
    long long int d,temp,v,sum=0;
cin>>test;
for(j=0;j<test;j++)
{
    cin>>d>>v;
    if(d==0)
        output.push_back(1);
    else if(d==1)
        output.push_back(1+v);
    else if(d>=2){
            sum=v*(v-1)*(pow(v-1,d-1)-1)/(v-2)+1+v;
            output.push_back(sum);
    }
}
for(i=0;i<output.size();i++)
cout<<"Case "<<i+1<<": "<<output[i]<<endl;

return 0;
}
