#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
    vector<char>collate1;
    string input_String;
    int input;
    cin>>input_String;
    cin>>input;
    sort(input_String.begin(),input_String.end());
    for(int i=0; i<input_String.length(); i++)
    {
        if(input_String[i]==input_String[i+input-1])
            input_String.erase(input_String.begin()+i+input-1);
    }
//        for(int i=0;i<input_String.length();i++)
//        cout<<input_String[i];
    int counter=0;
    for(int i=0; i<input_String.length()-input; i++)
    {
        string output="";
        for(int j=i+1; j<input_String.length()-input+1; j++)
        {
            output+=input_String[i];
            for(int k=j; k<j+input-2; k++)
                output+=input_String[k];
            for(int l=j+input-2; l<input_String.length(); l++)
                cout<<output<<input_String[l]<<endl;
            counter++;
            output.clear();
        }
    }
    cout<<counter<<endl;
    return 0;
}
