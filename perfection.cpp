#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int input,temp=0,i,sum;
cout<<"PERFECTION OUTPUT\n";
while(scanf("%d",&input)==1 && (input>0))
{
    sum=0;
    temp=input;
    for(i=1;i<=input/2;i++)
    {
        if(input%i==0)
        sum+=i;
    }
    if(sum==temp)
        printf("%5d  PERFECT\n",temp);
    else if(sum>temp)
        printf("%5d  ABUNDANT\n",temp);
    else if(sum<temp)
    printf("%5d  DEFICIENT\n",temp);
    temp=0;
}
cout<<"END OF OUTPUT\n";
return 0;
}
