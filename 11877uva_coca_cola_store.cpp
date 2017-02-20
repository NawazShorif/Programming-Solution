#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int i=0,n,temp;
while(scanf("%d",&n)==1 && n>0){
        temp=0;
    while(n/3>0){
        temp+=n/3;
        n=n/3+n%3;
    }
    if(n==2)
        temp++;
    cout<<temp<<endl;
}
return 0;
}
