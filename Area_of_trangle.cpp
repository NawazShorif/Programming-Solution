#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int > inputX,inputY;
    int testCase,x[4],y[4],i,sum=0,sum1;
    ///cin>>testCase;
    for(i=0; i<4; i++)
        cin>>x[i]>>y[i];
    sum=x[0]*y[1]-x[1]*y[0]+x[1]*y[2]-x[2]*y[1]+x[2]*y[0]-x[0]*y[2];
    sum1=x[0]*y[1]-x[1]*y[0]+x[1]*y[2]-x[2]*y[1]+x[2]*y[3]-x[3]*y[2]+x[3]*y[0]-x[0]*y[3];
    if(sum==sum1)
        cout<<"one the line";
    else if(sum>sum1)
        cout<<"in the trangle";
    else if(sum<sum1)
        cout<<"out the trangle";

    return 0;
}
