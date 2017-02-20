#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int test,number;
    vector<long int > input1,input2;
cin>>test;
int result[test],i,j,k,temp;
for(j=0;j<test;j++)
{
    input1.clear();
    input2.clear();
    result[j]=0;
    cin>>number;
    for(i=0;i<number;i++)
    {
        cin>>temp;
        input1.push_back(temp);
    }
    for(i=0;i<number;i++)
    {
        cin>>temp;
        input2.push_back(temp);
    }
    for(i=0;i<number;i++){
            //k=0;
        if(input2[i]!=input1[i]){
            temp=input1[i];
        remove(input1.begin(),input1.end(),input1[i]);
        //find(input2.begin(),input2.end(),temp);
        input1.insert(find(input2.begin(),input2.end(),temp),temp);
        result[j]+=2;
        }
        //k++;
    }

}
for(j=0;j<test;j++){
        cout<<"Case "<<j+1<<": "<<result[j]<<endl;


}
return 0;
}
