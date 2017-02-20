#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
int reverse (int x){
}
using namespace std;
int main(){
    vector<int>n;
    int carry,temp,temp1,input,i,j,sum;
    while(scanf("%d",&input)==1 &&(input>0)){
        n.clear();
         temp=input;
        while(input%10!=0)
        {
            n.push_back(input%10);
            input/=10;
        }
        for(i=temp-1;i>1;i++){
            carry=0;
            for(j=0;j<n.size();j++){
                temp1=carry;
                carry=(carry+n[j]*i)/10;
                n[j]=(temp1+n[j]*i)%10;
            }
            while(carry%10!=0)
        {
            n.push_back(carry%10);
            carry/=10;
        }
        }
        for(i=0;i<n.size();i++)
        cout<<n[i]<<" "<<endl;
    }
return 0;
}
