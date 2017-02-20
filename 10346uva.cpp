#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n,k,total;
while(scanf("%d %d",&n,&k)==2 && k>1){
        total=n;
    while(n>=k){
        total+=n/k;
        n=n/k+n%k;
    }
    cout<<total<<endl;
}
return 0;
}
